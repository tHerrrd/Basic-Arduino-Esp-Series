//=========VARIABEL=============\\
/*---Storing VALUE, on a NAME---*/
int led = 2 ;                   /*(integer) commonly used for pin declaration, spec (2bytes / 16 bits)
                                && if the value wants to be changed at any time*/
constexpr int led2 = 4 ;        //(constanta expression) best option if the value has been fixed and will not be changed*/
 

//=============COMMAND=============\\
/*---Miscellaneous orders and statements---*/

void setup()                    //---->MANDATORY in each program<----, read once (pin usage statement for example)  
{
  pinMode(led2, OUTPUT);       //pin usage statement
  pinMode(led, OUTPUT);
}

void loop()                     //---->MANDATORY in each program<----, repeated readings until the device turns off
{
  digitalWrite(led2, HIGH);     //(digitalWrite) to write commands such as (led, HIGH); --HIGH/1 is active in the programming language
  digitalWrite(led, LOW);
  delay(500);                   //(delay)Pause to move on to the next program
  digitalWrite(led2, LOW);      //--LOW/0 is off in the programming language
  digitalWrite(led, HIGH);
  delay(500);
}
