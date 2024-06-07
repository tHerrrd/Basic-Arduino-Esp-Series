int buz = 15 ;

void setup()
{
  pinMode(buz,OUTPUT);
}

void loop() 
{
  tone(buz, 2000);
  delay(500);
  tone(buz, 1500);
  delay(500);
  tone(buz, 1000); //buzzer ON & frekuensi
  delay(500);
  noTone(buz); //buzzer off & not sound
  delay(500);
  tone(buz, 1000);
  delay(500);
  tone(buz, 1500);
  delay(500);
  tone(buz, 2000);
  delay(500);
  tone(buz, 2500);
  delay(500);
}
