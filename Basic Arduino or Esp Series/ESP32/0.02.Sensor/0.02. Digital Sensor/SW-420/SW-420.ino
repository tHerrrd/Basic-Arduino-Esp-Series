int LED = 2 ;  //------->Variable Led
int vib = 4 ;  //------->Variable sensor

void setup()
{
  pinMode(vib, INPUT);  //------->sensor as input
  pinMode(LED, OUTPUT);    //------->led as output
}

void loop()
{
  if(digitalRead(vib) == HIGH) //If the sensor detects or high
  {
    digitalWrite(LED, HIGH); //led ON
  } 
  else  //if not                    
  {
    digitalWrite(LED, LOW );  //led OFF
  }
}

