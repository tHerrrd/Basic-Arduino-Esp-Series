int LED = 2 ;  //------->Variable Led
int sensor = 4 ;  //------->Variable sensor

void setup()
{
  pinMode(sensor, INPUT);  //------->sensor as input
  pinMode(LED, OUTPUT);    //------->led as output
}

void loop()
{
  if(digitalRead(sensor) == HIGH) //If the sensor detects or high
  {
    digitalWrite(LED, HIGH); //led ON
  } 
  else  //if not                    
  {
    digitalWrite(LED, LOW );  //led OFF
  }
}

