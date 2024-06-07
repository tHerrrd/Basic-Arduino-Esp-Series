#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

SoftwareSerial mySoftwareSerial(16, 17); // RX, TX
DFRobotDFPlayerMini myDFPlayer;

void setup()
{
  mySoftwareSerial.begin(9600);
  Serial.begin(115200);

  if (!myDFPlayer.begin(mySoftwareSerial)) {  //Use softwareSerial to communicate with mp3.
    while(true);
  }

  myDFPlayer.volume(27);  //Set volume value (0~30).
  myDFPlayer.play(1);  //Play the first mp3. ----> Make sure the folder is in mp3 format <-----
}

void loop()
{
  static unsigned long timer = millis();

  if (millis() - timer > 180000) //60000 ms = 1 minutes (because 1 minute = 60 seconds and 1 second = 1000 milliseconds)
  {
    timer = millis();
    myDFPlayer.next();  //Play next mp3 every 3 second.
  }
}
