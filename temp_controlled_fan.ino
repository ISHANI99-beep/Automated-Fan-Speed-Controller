//Reads temperature sensor value and converts into celsius
//Varies Fan Speed depending on the measured temp
void setup() 
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(10,OUTPUT);
}

void loop() 
{
  float value = analogRead(A0);
  float celsius = value * 0.48828125;
  Serial.print(celsius);
  
  Serial.print("\n");

          if (celsius < 28)
          {
            analogWrite(10,0);
          }
          else if (celsius >= 28 && celsius <=31)
          {
            analogWrite(10,65);
          }
          else if (celsius >= 31 && celsius <=31.5)
          {
            analogWrite(10,100);
          }
          else if (celsius >= 31.5 && celsius <=32)
          {
            analogWrite(10,150);
          }
          else if (celsius >= 32 && celsius <=32.5)
          {
            analogWrite(10,190);
          }
          else if (celsius >= 32.5 && celsius <=33)
          {
            analogWrite(10,220);
          }
          else if (celsius >= 33)
          {
            analogWrite(10,250);
          }
          
          
  delay(1000);}


}
