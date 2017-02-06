#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
// This is Comment
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Your Wifi-Network Name";
char pass[] = "Your Wifi-Password";

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "Auth Token of your Blyk Project";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(D5, OUTPUT);
}
BLYNK_WRITE(V1) //Button Widget is writing to pin V1
{
  int pinData = param.asInt();  //values 0 or 1
  digitalWrite(D5, pinData);
}
void loop()
{
  Blynk.run();
}
