#include <WiFi.h>

#define vib 32
#define buz 33 
#define led 18

int vibration = 0; // Inisialisasi vibration = 0

const char* ssid = "Samsung";
const char* pass = "12345678";

void setup() {
  pinMode(buz, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(vib, INPUT);
}

void loop() {
 vibration = digitalRead(vib);
 Serial.println("Menunggu Getaran ...");
 if(vibration==HIGH)
 {
 Serial.print("Ada Getaran");
 Serial.println(vibration);
 digitalWrite(led, HIGH);
 tone(buz, 1000);
 delay(500);
 noTone(buz);
 }
 else
{
 digitalWrite(led, LOW);
 Serial.print("Tidak Ada Getaran");
 Serial.println(vibration);
 noTone(buz);
}
  delay(100);

}
