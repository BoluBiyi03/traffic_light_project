/*This is a project on traffic light
By Oluwabiyi Boluwatife Joshua 
The purpose is to control the flow of traffic
*/
// Declare the pins 
const int Red_LED = 8;
const int Yellow_LED = 9;
const int Green_LED = 10;

void setup()
{
  //Set the pins as outputs 
  pinMode(Red_LED, OUTPUT);
  pinMode(Yellow_LED, OUTPUT);
  pinMode(Green_LED, OUTPUT);
}

void loop() 
{
  //Turn on all the LED
  digitalWrite(Red_LED, HIGH);
  delay(3000);
  digitalWrite(Yellow_LED, HIGH);
  delay(1000);
  digitalWrite(Green_LED, HIGH);
  delay(3000);

}

void changeLedState(int ledPin)
{
  if (ledPin == Red_LED) 
  {
    // Set only the Red_LED to on while the others are off 
    digitalWrite(Red_LED, HIGH);
    delay(3000);
    digitalWrite(Yellow_LED, LOW);
    delay(1000);
    digitalWrite(Green_LED, LOW);
    delay(1000);
  
  }
  else if (ledPin == Yellow_LED) 
  {
    //Set only the Yellow_LED to on while the others are off
    digitalWrite(Red_LED, LOW);
    delay(3000);
    digitalWrite(Yellow_LED, HIGH);
    delay(1000);
    digitalWrite(Green_LED, LOW);
    delay(3000);
  }
  else if (ledPin == Green_LED) 
  {
    //Set only the Green_LED to on while the others are off
    digitalWrite(Red_LED, LOW);
    delay(3000);
    digitalWrite(Yellow_LED, LOW);
    delay(3000);
    digitalWrite(Green_LED, HIGH);
    delay(3000);
  }
  else 
  {
    //Set all the LED to off 
    digitalWrite(Red_LED, LOW);
    delay(1000);
    digitalWrite(Yellow_LED, LOW);
    delay(1000);
    digitalWrite(Green_LED, LOW);
    delay(1000);
  }

  delay(3000);
}
