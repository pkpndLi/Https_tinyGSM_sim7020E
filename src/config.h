#ifndef _CONFIG_H
#define _CONFIG_H

// #include <avr/pgmspace.h>
#include "Arduino.h"

#define DEBUG_MODE false

#define TINY_GSM_MODEM_SIM7020

#define debugSerial Serial

/* Set serial for AT commands (to the module) */
#define nbiotSerial Serial2

// Set reset pin
#define RESET_PIN 27

#define TINY_GSM_DEBUG debugSerial
/* See all AT commands, if wanted */
// #define DUMP_AT_COMMANDS

/* ---nbiot config--- */
// #define APN "twm.nbiot"
// #define BAND 28
#define APN "devkit.nb"
#define BAND 8

/* ---mqtt config--- */
// #define BROKER "broker.emqx.io-ca"
// #define server "vsh.pp.ua"
// #define port 443
// #define BROKER "a5x4q44cufxhc-ats.iot.ap-southeast-1.amazonaws.com"

#define TEST_TOPIC "thisTopicNaJa"
#define MQTT_USERNAME "<YOUR USERNAME>"
#define MQTT_PASSWORD "<YOUR KEY>"

/* httpbin.org */
const char root_ca[] PROGMEM = {"-----BEGIN CERTIFICATE-----\\r\\n"
                                "MIIEdTCCA12gAwIBAgIJAKcOSkw0grd/MA0GCSqGSIb3DQEBCwUAMGgxCzAJBgNV\\r\\n"
                                "BAYTAlVTMSUwIwYDVQQKExxTdGFyZmllbGQgVGVjaG5vbG9naWVzLCBJbmMuMTIw\\r\\n"
                                "MAYDVQQLEylTdGFyZmllbGQgQ2xhc3MgMiBDZXJ0aWZpY2F0aW9uIEF1dGhvcml0\\r\\n"
                                "eTAeFw0wOTA5MDIwMDAwMDBaFw0zNDA2MjgxNzM5MTZaMIGYMQswCQYDVQQGEwJV\\r\\n"
                                "UzEQMA4GA1UECBMHQXJpem9uYTETMBEGA1UEBxMKU2NvdHRzZGFsZTElMCMGA1UE\\r\\n"
                                "ChMcU3RhcmZpZWxkIFRlY2hub2xvZ2llcywgSW5jLjE7MDkGA1UEAxMyU3RhcmZp\\r\\n"
                                "ZWxkIFNlcnZpY2VzIFJvb3QgQ2VydGlmaWNhdGUgQXV0aG9yaXR5IC0gRzIwggEi\\r\\n"
                                "MA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDVDDrEKvlO4vW+GZdfjohTsR8/\\r\\n"
                                "y8+fIBNtKTrID30892t2OGPZNmCom15cAICyL1l/9of5JUOG52kbUpqQ4XHj2C0N\\r\\n"
                                "Tm/2yEnZtvMaVq4rtnQU68/7JuMauh2WLmo7WJSJR1b/JaCTcFOD2oR0FMNnngRo\\r\\n"
                                "Ot+OQFodSk7PQ5E751bWAHDLUu57fa4657wx+UX2wmDPE1kCK4DMNEffud6QZW0C\\r\\n"
                                "zyyRpqbn3oUYSXxmTqM6bam17jQuug0DuDPfR+uxa40l2ZvOgdFFRjKWcIfeAg5J\\r\\n"
                                "Q4W2bHO7ZOphQazJ1FTfhy/HIrImzJ9ZVGif/L4qL8RVHHVAYBeFAlU5i38FAgMB\\r\\n"
                                "AAGjgfAwge0wDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMCAYYwHQYDVR0O\\r\\n"
                                "BBYEFJxfAN+qAdcwKziIorhtSpzyEZGDMB8GA1UdIwQYMBaAFL9ft9HO3R+G9FtV\\r\\n"
                                "rNzXEMIOqYjnME8GCCsGAQUFBwEBBEMwQTAcBggrBgEFBQcwAYYQaHR0cDovL28u\\r\\n"
                                "c3MyLnVzLzAhBggrBgEFBQcwAoYVaHR0cDovL3guc3MyLnVzL3guY2VyMCYGA1Ud\\r\\n"
                                "HwQfMB0wG6AZoBeGFWh0dHA6Ly9zLnNzMi51cy9yLmNybDARBgNVHSAECjAIMAYG\\r\\n"
                                "BFUdIAAwDQYJKoZIhvcNAQELBQADggEBACMd44pXyn3pF3lM8R5V/cxTbj5HD9/G\\r\\n"
                                "VfKyBDbtgB9TxF00KGu+x1X8Z+rLP3+QsjPNG1gQggL4+C/1E2DUBc7xgQjB3ad1\\r\\n"
                                "l08YuW3e95ORCLp+QCztweq7dp4zBncdDQh/U90bZKuCJ/Fp1U1ervShw3WnWEQt\\r\\n"
                                "8jxwmKy6abaVd38PMV4s/KCHOkdp8Hlf9BRUpJVeEXgSYCfOn8J3/yNTd126/+pZ\\r\\n"
                                "59vPr5KW7ySaNRB6nJHGDn2Z9j8Z3/VyVOEVqQdZe4O/Ui5GjLIAZHYcSNPYeehu\\r\\n"
                                "VsyuLAOQ1xk4meTKCRlb/weWsKh/NEnfVqn3sF/tM+2MR7cwA130A4w=\\r\\n"
                                "-----END CERTIFICATE-----"};

/* ---io.adafruit.com root certificate--- */
// const char root_ca[] PROGMEM = {"-----BEGIN CERTIFICATE-----\\r\\n"
//                                 "MIIDrzCCApegAwIBAgIQCDvgVpBCRrGhdWrJWZHHSjANBgkqhkiG9w0BAQUFADBh\\r\\n"
//                                 "MQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3\\r\\n"
//                                 "d3cuZGlnaWNlcnQuY29tMSAwHgYDVQQDExdEaWdpQ2VydCBHbG9iYWwgUm9vdCBD\\r\\n"
//                                 "QTAeFw0wNjExMTAwMDAwMDBaFw0zMTExMTAwMDAwMDBaMGExCzAJBgNVBAYTAlVT\\r\\n"
//                                 "MRUwEwYDVQQKEwxEaWdpQ2VydCBJbmMxGTAXBgNVBAsTEHd3dy5kaWdpY2VydC5j\\r\\n"
//                                 "b20xIDAeBgNVBAMTF0RpZ2lDZXJ0IEdsb2JhbCBSb290IENBMIIBIjANBgkqhkiG\\r\\n"
//                                 "9w0BAQEFAAOCAQ8AMIIBCgKCAQEA4jvhEXLeqKTTo1eqUKKPC3eQyaKl7hLOllsB\\r\\n"
//                                 "CSDMAZOnTjC3U/dDxGkAV53ijSLdhwZAAIEJzs4bg7/fzTtxRuLWZscFs3YnFo97\\r\\n"
//                                 "nh6Vfe63SKMI2tavegw5BmV/Sl0fvBf4q77uKNd0f3p4mVmFaG5cIzJLv07A6Fpt\\r\\n"
//                                 "43C/dxC//AH2hdmoRBBYMql1GNXRor5H4idq9Joz+EkIYIvUX7Q6hL+hqkpMfT7P\\r\\n"
//                                 "T19sdl6gSzeRntwi5m3OFBqOasv+zbMUZBfHWymeMr/y7vrTC0LUq7dBMtoM1O/4\\r\\n"
//                                 "gdW7jVg/tRvoSSiicNoxBN33shbyTApOB6jtSj1etX+jkMOvJwIDAQABo2MwYTAO\\r\\n"
//                                 "BgNVHQ8BAf8EBAMCAYYwDwYDVR0TAQH/BAUwAwEB/zAdBgNVHQ4EFgQUA95QNVbR\\r\\n"
//                                 "TLtm8KPiGxvDl7I90VUwHwYDVR0jBBgwFoAUA95QNVbRTLtm8KPiGxvDl7I90VUw\\r\\n"
//                                 "DQYJKoZIhvcNAQEFBQADggEBAMucN6pIExIK+t1EnE9SsPTfrgT1eXkIoyQY/Esr\\r\\n"
//                                 "hMAtudXH/vTBH1jLuG2cenTnmCmrEbXjcKChzUyImZOMkXDiqw8cvpOp/2PV5Adg\\r\\n"
//                                 "06O/nVsJ8dWO41P0jmP6P6fbtGbfYmbW0W5BjfIttep3Sp+dWOIrWcBAI+0tKIJF\\r\\n"
//                                 "PnlUkiaY4IBIqDfv8NZ5YBberOgOzW6sRBc4L0na4UU+Krk2U886UAb3LujEV0ls\\r\\n"
//                                 "YSEY1QSteDwsOoBrp+uvFRTp2InBuThs4pFsiv9kuXclVzDAGySj4dzp30d8tbQk\\r\\n"
//                                 "CAUw7C29C79Fv1C5qfPrmAESrciIxpg0X40KPMbp1ZWVbd4=\\r\\n"
//                                 "-----END CERTIFICATE-----"};

// const char root_ca[] PROGMEM = {"-----BEGIN CERTIFICATE-----\\r\\n"
//                             "MIIF3jCCA8agAwIBAgIQAf1tMPyjylGoG7xkDjUDLTANBgkqhkiG9w0BAQwFADCB\\r\\n"
//                             "iDELMAkGA1UEBhMCVVMxEzARBgNVBAgTCk5ldyBKZXJzZXkxFDASBgNVBAcTC0pl\\r\\n"
//                             "cnNleSBDaXR5MR4wHAYDVQQKExVUaGUgVVNFUlRSVVNUIE5ldHdvcmsxLjAsBgNV\\r\\n"
//                             "BAMTJVVTRVJUcnVzdCBSU0EgQ2VydGlmaWNhdGlvbiBBdXRob3JpdHkwHhcNMTAw\\r\\n"
//                             "MjAxMDAwMDAwWhcNMzgwMTE4MjM1OTU5WjCBiDELMAkGA1UEBhMCVVMxEzARBgNV\\r\\n"
//                             "BAgTCk5ldyBKZXJzZXkxFDASBgNVBAcTC0plcnNleSBDaXR5MR4wHAYDVQQKExVU\\r\\n"
//                             "aGUgVVNFUlRSVVNUIE5ldHdvcmsxLjAsBgNVBAMTJVVTRVJUcnVzdCBSU0EgQ2Vy\\r\\n"
//                             "dGlmaWNhdGlvbiBBdXRob3JpdHkwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIK\\r\\n"
//                             "AoICAQCAEmUXNg7D2wiz0KxXDXbtzSfTTK1Qg2HiqiBNCS1kCdzOiZ/MPans9s/B\\r\\n"
//                             "3PHTsdZ7NygRK0faOca8Ohm0X6a9fZ2jY0K2dvKpOyuR+OJv0OwWIJAJPuLodMkY\\r\\n"
//                             "tJHUYmTbf6MG8YgYapAiPLz+E/CHFHv25B+O1ORRxhFnRghRy4YUVD+8M/5+bJz/\\r\\n"
//                             "Fp0YvVGONaanZshyZ9shZrHUm3gDwFA66Mzw3LyeTP6vBZY1H1dat//O+T23LLb2\\r\\n"
//                             "VN3I5xI6Ta5MirdcmrS3ID3KfyI0rn47aGYBROcBTkZTmzNg95S+UzeQc0PzMsNT\\r\\n"
//                             "79uq/nROacdrjGCT3sTHDN/hMq7MkztReJVni+49Vv4M0GkPGw/zJSZrM233bkf6\\r\\n"
//                             "c0Plfg6lZrEpfDKEY1WJxA3Bk1QwGROs0303p+tdOmw1XNtB1xLaqUkL39iAigmT\\r\\n"
//                             "Yo61Zs8liM2EuLE/pDkP2QKe6xJMlXzzawWpXhaDzLhn4ugTncxbgtNMs+1b/97l\\r\\n"
//                             "c6wjOy0AvzVVdAlJ2ElYGn+SNuZRkg7zJn0cTRe8yexDJtC/QV9AqURE9JnnV4ee\\r\\n"
//                             "UB9XVKg+/XRjL7FQZQnmWEIuQxpMtPAlR1n6BB6T1CZGSlCBst6+eLf8ZxXhyVeE\\r\\n"
//                             "Hg9j1uliutZfVS7qXMYoCAQlObgOK6nyTJccBz8NUvXt7y+CDwIDAQABo0IwQDAd\\r\\n"
//                             "BgNVHQ4EFgQUU3m/WqorSs9UgOHYm8Cd8rIDZsswDgYDVR0PAQH/BAQDAgEGMA8G\\r\\n"
//                             "A1UdEwEB/wQFMAMBAf8wDQYJKoZIhvcNAQEMBQADggIBAFzUfA3P9wF9QZllDHPF\\r\\n"
//                             "Up/L+M+ZBn8b2kMVn54CVVeWFPFSPCeHlCjtHzoBN6J2/FNQwISbxmtOuowhT6KO\\r\\n"
//                             "VWKR82kV2LyI48SqC/3vqOlLVSoGIG1VeCkZ7l8wXEskEVX/JJpuXior7gtNn3/3\\r\\n"
//                             "ATiUFJVDBwn7YKnuHKsSjKCaXqeYalltiz8I+8jRRa8YFWSQEg9zKC7F4iRO/Fjs\\r\\n"
//                             "8PRF/iKz6y+O0tlFYQXBl2+odnKPi4w2r78NBc5xjeambx9spnFixdjQg3IM8WcR\\r\\n"
//                             "iQycE0xyNN+81XHfqnHd4blsjDwSXWXavVcStkNr/+XeTWYRUc+ZruwXtuhxkYze\\r\\n"
//                             "Sf7dNXGiFSeUHM9h4ya7b6NnJSFd5t0dCy5oGzuCr+yDZ4XUmFF0sbmZgIn/f3gZ\\r\\n"
//                             "XHlKYC6SQK5MNyosycdiyA5d9zZbyuAlJQG03RoHnHcAP9Dc1ew91Pq7P8yF1m9/\\r\\n"
//                             "qS3fuQL39ZeatTXaw2ewh0qpKJ4jjv9cJ2vhsE/zB+4ALtRZh8tSQZXq9EfX7mRB\\r\\n"
//                             "VXyNWQKV3WKdwrnuWih0hKWbt5DHDAff9Yk2dDLWKMGwsAvgnEzDHNb842m1R0aB\\r\\n"
//                             "L6KCq9NjRHDEjf8tM7qtj3u1cIiuPhnPQCjY/MiQu12ZIvVS5ljFH4gxQ+6IHdfG\\r\\n"
//                             "jjxDah2nGN59PRbxYvnKkKj9\\r\\n"
//                             "-----END CERTIFICATE-----"};
/* ---test.mosquitto.org root certificate--- */
// const char root_ca[] PROGMEM = {"-----BEGIN CERTIFICATE-----\\r\\n"
//                                 "MIIEAzCCAuugAwIBAgIUBY1hlCGvdj4NhBXkZ/uLUZNILAwwDQYJKoZIhvcNAQEL\\r\\n"
//                                 "BQAwgZAxCzAJBgNVBAYTAkdCMRcwFQYDVQQIDA5Vbml0ZWQgS2luZ2RvbTEOMAwG\\r\\n"
//                                 "A1UEBwwFRGVyYnkxEjAQBgNVBAoMCU1vc3F1aXR0bzELMAkGA1UECwwCQ0ExFjAU\\r\\n"
//                                 "BgNVBAMMDW1vc3F1aXR0by5vcmcxHzAdBgkqhkiG9w0BCQEWEHJvZ2VyQGF0Y2hv\\r\\n"
//                                 "by5vcmcwHhcNMjAwNjA5MTEwNjM5WhcNMzAwNjA3MTEwNjM5WjCBkDELMAkGA1UE\\r\\n"
//                                 "BhMCR0IxFzAVBgNVBAgMDlVuaXRlZCBLaW5nZG9tMQ4wDAYDVQQHDAVEZXJieTES\\r\\n"
//                                 "MBAGA1UECgwJTW9zcXVpdHRvMQswCQYDVQQLDAJDQTEWMBQGA1UEAwwNbW9zcXVp\\r\\n"
//                                 "dHRvLm9yZzEfMB0GCSqGSIb3DQEJARYQcm9nZXJAYXRjaG9vLm9yZzCCASIwDQYJ\\r\\n"
//                                 "KoZIhvcNAQEBBQADggEPADCCAQoCggEBAME0HKmIzfTOwkKLT3THHe+ObdizamPg\\r\\n"
//                                 "UZmD64Tf3zJdNeYGYn4CEXbyP6fy3tWc8S2boW6dzrH8SdFf9uo320GJA9B7U1FW\\r\\n"
//                                 "Te3xda/Lm3JFfaHjkWw7jBwcauQZjpGINHapHRlpiCZsquAthOgxW9SgDgYlGzEA\\r\\n"
//                                 "s06pkEFiMw+qDfLo/sxFKB6vQlFekMeCymjLCbNwPJyqyhFmPWwio/PDMruBTzPH\\r\\n"
//                                 "3cioBnrJWKXc3OjXdLGFJOfj7pP0j/dr2LH72eSvv3PQQFl90CZPFhrCUcRHSSxo\\r\\n"
//                                 "E6yjGOdnz7f6PveLIB574kQORwt8ePn0yidrTC1ictikED3nHYhMUOUCAwEAAaNT\\r\\n"
//                                 "MFEwHQYDVR0OBBYEFPVV6xBUFPiGKDyo5V3+Hbh4N9YSMB8GA1UdIwQYMBaAFPVV\\r\\n"
//                                 "6xBUFPiGKDyo5V3+Hbh4N9YSMA8GA1UdEwEB/wQFMAMBAf8wDQYJKoZIhvcNAQEL\\r\\n"
//                                 "BQADggEBAGa9kS21N70ThM6/Hj9D7mbVxKLBjVWe2TPsGfbl3rEDfZ+OKRZ2j6AC\\r\\n"
//                                 "6r7jb4TZO3dzF2p6dgbrlU71Y/4K0TdzIjRj3cQ3KSm41JvUQ0hZ/c04iGDg/xWf\\r\\n"
//                                 "+pp58nfPAYwuerruPNWmlStWAXf0UTqRtg4hQDWBuUFDJTuWuuBvEXudz74eh/wK\\r\\n"
//                                 "sMwfu1HFvjy5Z0iMDU8PUDepjVolOCue9ashlS4EB5IECdSR2TItnAIiIwimx839\\r\\n"
//                                 "LdUdRudafMu5T5Xma182OC0/u/xRlEm+tvKGGmfFcN0piqVl8OrSPBgIlb+1IKJE\\r\\n"
//                                 "m/XriWr/Cq4h/JfB7NTsezVslgkBaoU=\\r\\n"
//                                 "-----END CERTIFICATE-----"};

/* ---a5x4q44cufxhc-ats.iot.ap-southeast-1.amazonaws.com root certificate---*/
// const char root_ca[] PROGMEM ={"-----BEGIN CERTIFICATE-----\\r\\n"
//                                 "MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\\r\\n"
//                                 "ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\\r\\n"
//                                 "b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\\r\\n"
//                                 "MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\\r\\n"
//                                 "b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\\r\\n"
//                                 "ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\\r\\n"
//                                 "9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\\r\\n"
//                                 "IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\\r\\n"
//                                 "VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\\r\\n"
//                                 "93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\\r\\n"
//                                 "jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\\r\\n"
//                                 "AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\\r\\n"
//                                 "A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\\r\\n"
//                                 "U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\\r\\n"
//                                 "N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\\r\\n"
//                                 "o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\\r\\n"
//                                 "5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\\r\\n"
//                                 "rqXRfboQnoZsG4q5WTP468SQvvG5\\r\\n"
//                                 "-----END CERTIFICATE-----"

// };

// const char client_ca[] PROGMEM ={"-----BEGIN CERTIFICATE-----\\r\\n"
//                                 "MIIDWTCCAkGgAwIBAgIUaAJrSeJhcxj50Qj9IH0ZDhaT6RcwDQYJKoZIhvcNAQEL\\r\\n"
//                                 "BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\\r\\n"
//                                 "SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIxMDMwNDAzMzk1\\r\\n"
//                                 "OVoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\\r\\n"
//                                 "ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALv8sNJXAlDmTf3yzVEJ\\r\\n"
//                                 "yg3goVmV1Sj7QLZqO00mHt4sfP2fIAy+l7DygxKFoPV6rNh1+oKfXOd7IO2dxKJ2\\r\\n"
//                                 "4sJo8gt76B3A2k3yeCt0hB+COqywUhLTYWGBcZ6lepxgnsHBGbdJKYnFU3qdd5QY\\r\\n"
//                                 "snk2zrZiR5m8fZld3yHBzRY4Q1e4qDoIRYXJfjrBvBJRV5mlcpeP58xaI/s+9PM/\\r\\n"
//                                 "g6ESQ9/CBq/HXV11tLHk55wNO8LAJaN/rfSE0DJhHLRKD/YmHyi/agybARtpnx1L\\r\\n"
//                                 "pzc/MhMr85x5CCMgmNFF5DvDpFy38yy4K7okKI9y48zL0JU2hz0MlcxTS28vHhFX\\r\\n"
//                                 "4V8CAwEAAaNgMF4wHwYDVR0jBBgwFoAUwv0w3u3OksdyukFTaAhtYiPBbdAwHQYD\\r\\n"
//                                 "VR0OBBYEFJQHnZjUg6BBRELJ+M8r9k1JOJXbMAwGA1UdEwEB/wQCMAAwDgYDVR0P\\r\\n"
//                                 "AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQCwKpq2upddil0rVhGC5xkVClNV\\r\\n"
//                                 "hpMqfpSOPAOpPwxj23tYeWGg3eruXKJ3fJmXISTDlWSWXVpMbCHTMRSU1ZgdwpIW\\r\\n"
//                                 "5JbePLv/XjWTQWBoSBFnyDc1gfvfEe3PsYqmYZU6xTkX5z2InM8F8AnEjqhjajy/\\r\\n"
//                                 "yBSmR8rmeZECR69aB3FjGUScO5Jpfh94AEh7qy7fkUbk/pfVs1+sN87pWMbfmJ8E\\r\\n"
//                                 "dR+RglNueLcJn7GdTHyLPoMZs8wmXW3Yi8gEm8AkdQCugpMnQdyVyqq9a0+kEAZ+\\r\\n"
//                                 "jhKr7daFlq6Ot7yj2J3N4muj7VBDshTFBez5voxZoRzRd8aPFQmXCesp1OwR\\r\\n"
//                                 "-----END CERTIFICATE-----"

// };

// const char client_key[] PROGMEM ={"-----BEGIN RSA PRIVATE KEY-----\\r\\n"
//                                 "MIIEowIBAAKCAQEAu/yw0lcCUOZN/fLNUQnKDeChWZXVKPtAtmo7TSYe3ix8/Z8g\\r\\n"
//                                 "DL6XsPKDEoWg9Xqs2HX6gp9c53sg7Z3EonbiwmjyC3voHcDaTfJ4K3SEH4I6rLBS\\r\\n"
//                                 "EtNhYYFxnqV6nGCewcEZt0kpicVTep13lBiyeTbOtmJHmbx9mV3fIcHNFjhDV7io\\r\\n"
//                                 "OghFhcl+OsG8ElFXmaVyl4/nzFoj+z708z+DoRJD38IGr8ddXXW0seTnnA07wsAl\\r\\n"
//                                 "o3+t9ITQMmEctEoP9iYfKL9qDJsBG2mfHUunNz8yEyvznHkIIyCY0UXkO8OkXLfz\\r\\n"
//                                 "LLgruiQoj3LjzMvQlTaHPQyVzFNLby8eEVfhXwIDAQABAoIBAESINp44AiwkCcLO\\r\\n"
//                                 "xXMJspOklK3oJbGvB0R5Le1OPGqapWaAoFqFER/9CTOza56Sfnjbadw85M2u4a4+\\r\\n"
//                                 "mfTwinJ9d+Af59sQ94T7JDwTWidyfpl+Hi2myhWV7yn7AdwIjVftYcaj8XS8b1aA\\r\\n"
//                                 "GZvv9QCjrnBnG9s8ED3dLv9Le8zhThPNUXhwVNHiIBzsC2alO/16XJvaDYVrBy1B\\r\\n"
//                                 "9eWoTKcd5HwiVCDiRcCqQ33ONmMcYutAiLlMIO9MVBzpJJ3gLsGV/5SoPVlKkmvn\\r\\n"
//                                 "PLwoTukZ10Q0x6vRmZQ5snwC069J5YNGwZP33BeN2rQvY3eqhkHTqYfIUnr+xD6z\\r\\n"
//                                 "xU70M+ECgYEA3qC/Rf6vRmC6yY60wes5+ZCnfaHvt5Z+TjtfoDscZs6zKToq0atM\\r\\n"
//                                 "0nydpKkL2PCj/Wx0rPuKOPSlAzi9pjQayBcYgps6i4hv3DSVt52FhzKkGBo1ds3/\\r\\n"
//                                 "R0BGPdQUhnO/DSRNFsURzICd6mKdbT3IbRIgtKtsBfcvQabePBw75GsCgYEA2Cqd\\r\\n"
//                                 "m5oXPJTjp0RqJnvGYJ7Yu4EE77ZjeqCHpj4BvjytwW828Rf0PD4QNPqOsaZz2dXZ\\r\\n"
//                                 "w+XWvuU+srBgzMmYMbGoJog01Dat6WLYcMjhkK48YMEow1jQA8UzsELeTsz5ApIp\\r\\n"
//                                 "k6SfpHL6aS8rL5foHATB9AxQbuGDiZLprUD/U90CgYBlPl0+C7DSJLNNbmStu7fF\\r\\n"
//                                 "0w8Yh0hpCTuvgDjguYEVD/NSUG2gpHJvVtSqSWZl5int2iDFei9F75wLdwZoS1HS\\r\\n"
//                                 "pQ40dzuMsSON1SwxMKXE8jbF70VZHh113bkT7RrYelLsOxIDxONvSR6HtQk64NoB\\r\\n"
//                                 "IDlXcI3TuLH4/VYbqAtkuQKBgQDKjqxfWXX6s73bSFV7uDI86bxHf2+DvFHdX72c\\r\\n"
//                                 "vq/ddniPMMq4Am0/YhzHuB2sREB82FIVqjKfcKtev74FR8aQklvxt2JhlNdEQfZ1\\r\\n"
//                                 "QRd0/n/fXkD3RCqvzcNQoGg2SQXxLcs96V4auA8EL0n1cA/06VRhfoSEUldyu7Ky\\r\\n"
//                                 "QZzAFQKBgECeWT277drWNaQU4h3lHZEO+YfrRnZElHj7wLFjc8CiaG/6zeuzeG1O\\r\\n"
//                                 "5y4N92a/uMZ+Js0PlaPGikMw8FD3saM7lZV1IM1TdSbjld5GjyzDss6NcYvL6pFV\\r\\n"
//                                 "72kCYX2BisevGwmoUbnrq06GGBuMNi4H7MKm2cRKjyFj0cg0hWRc\\r\\n"
//                                 "-----END RSA PRIVATE KEY-----"

// };

#endif /* _CONFIG_H */