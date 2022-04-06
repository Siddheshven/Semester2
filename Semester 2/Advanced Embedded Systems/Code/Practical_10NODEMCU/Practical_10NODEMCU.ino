#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266_SSL.h>
char auth[]="YourAuthToken";
char ssid[]="YourNetworkName";
char pass[]="YourPassword";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pass);
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run()
}
