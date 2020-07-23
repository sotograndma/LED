#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "**********************"; //Token blynk yg di email

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "punya sekolah"; //nama wifi
char pass[] = "05092311"; //password wifi

void setup()
{
// Debug console
Serial.begin(9600);

Blynk.begin(auth, ssid, pass);
}

void loop()
{
Blynk.run();
}
