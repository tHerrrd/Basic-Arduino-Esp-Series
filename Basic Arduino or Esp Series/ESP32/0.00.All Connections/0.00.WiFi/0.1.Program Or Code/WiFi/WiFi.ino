//--------->Your Microcontroller(below for esp32)<---------
#include <WiFi.h> //---------> for esp8266 <ESP8266WiFi.h> 

constexpr char* ssid = "Samsung"; // change it according to your connection 
constexpr char* pass = "12345678"; // It is recommended that the password only be numbers as in the example / not strange so that it is easy to connect

bool deviceConnected = false; // initial condition of the device

void setup()
{
  Serial.begin(115200); // Set the baud rate as needed
  //---------> Connect to WiFi <---------
  WiFi.begin(ssid, pass); // function attempts to connect to the specified network.
  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("WiFi connected!"); // indicate a successful connection
  deviceConnected = true; // Set the flag to true after successful connection
}

void loop()
{
  // Your other code here
}

/*------How to check whether a device is connected or not?
1.Wifi? look in the serial monitor, if it doesn't say "WiFi connected!" means not connected, and vice versa
*/