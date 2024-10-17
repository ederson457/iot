/*
Sketch function: temperature sensor sketch with TMP36
Dev: Ederson Valencia
Date: 12-09-2024
*/

#define LED       8
#define tempVal   0
int s=0;
int sensorVal = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  
  
}

void loop()
{
  digitalWrite(LED,HIGH);
  
  float temp = 0;
  sensorVal = analogRead(s);
  Serial.print("SensorVal imput: ");
  Serial.println(sensorVal);
  temp=(sensorVal * (500.0/1023.0)-50.0);
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println("\xB0 C ");

}