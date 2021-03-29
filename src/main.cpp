#include "config.h"
#include <Arduino.h>
#include "ArduinoHttpClient.h"
#include "TinyGsmClient.h"

const char server[] = "httpbin.org";
const char resource[] = "/anything";
const int port = 443;
// #define DUMP_AT_COMMANDS
#ifdef DUMP_AT_COMMANDS
#include <StreamDebugger.h>
StreamDebugger debugger(nbiotSerial, debugSerial);
TinyGsm modem(debugger, RESET_PIN);
#else
TinyGsm modem(nbiotSerial, RESET_PIN);
#endif
TinyGsmClient client(modem, root_ca);
HttpClient http(client, server, port);

void nbConnect(void);

void setup()
{
  debugSerial.begin(115200);
  nbiotSerial.begin(115200, SERIAL_8N1, 17, 16);

  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  digitalWrite(26, LOW);
  delay(800);
  digitalWrite(26, HIGH);

#if DEBUG_MODE

  while (!debugSerial)
    ;
#endif
  randomSeed(analogRead(A0));
  nbConnect();
}

void loop()
{
  static unsigned long timer = millis();
  if (!modem.isNetworkConnected())
  {
    nbConnect();
  }

  if (millis() - timer >= 10000)
  {
    timer = millis();
    debugSerial.print(F("Performing HTTPS GET request... "));
    http.connectionKeepAlive(); // Currently, this is needed for HTTPS
    int err = http.get(resource);
    if (err != 0)
    {
      debugSerial.println(F("failed to connect"));
      delay(10000);
      return;
    }

    int status = http.responseStatusCode();
    debugSerial.print(F("Response status code: "));
    debugSerial.println(status);
    if (!status)
    {
      delay(10000);
      return;
    }

    debugSerial.println(F("Response Headers:"));
    while (http.headerAvailable())
    {
      String headerName = http.readHeaderName();
      String headerValue = http.readHeaderValue();
      debugSerial.println("    " + headerName + " : " + headerValue);
    }

    int length = http.contentLength();
    if (length >= 0)
    {
      debugSerial.print(F("Content length is: "));
      debugSerial.println(length);
    }
    if (http.isResponseChunked())
    {
      debugSerial.println(F("The response is chunked"));
    }

    String body = http.responseBody();
    debugSerial.println(F("Response:"));
    debugSerial.println(body);

    debugSerial.print(F("Body length is: "));
    debugSerial.println(body.length());

    // Shutdown

    http.stop();
    debugSerial.println(F("Server disconnected"));
  }
}

void nbConnect(void)
{
  debugSerial.println(F("Initializing modem..."));
  while (!modem.init() || !modem.nbiotConnect(APN, BAND))
  {
    debugSerial.print(F("."));
  };
  debugSerial.println(F("modem success"));
  debugSerial.print(F("Waiting for network..."));
  while (!modem.waitForNetwork())
  {
    debugSerial.print(F("."));
  }
  debugSerial.println(F(" success"));
}