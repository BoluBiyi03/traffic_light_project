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
  // Set the pins as outputs
  pinMode(Red_LED, OUTPUT);
  pinMode(Yellow_LED, OUTPUT);
  pinMode(Green_LED, OUTPUT);
}

void loop()
{
  // Turn on Red LED
  digitalWrite(Red_LED, HIGH);
  delay(3000);
  digitalWrite(Red_LED, LOW);  // Turn off Red LED

  // Turn on Yellow LED
  digitalWrite(Yellow_LED, HIGH);
  delay(1000);
  digitalWrite(Yellow_LED, LOW);  // Turn off Yellow LED

  // Turn on Green LED
  digitalWrite(Green_LED, HIGH);
  delay(3000);
  digitalWrite(Green_LED, LOW);  // Turn off Green LED
}
