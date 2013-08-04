//

#include <Servo.h>

Servo pan;

int potpin = 0;
int potval;

int pos = 0;

void setup()
{
  pan.attach(9);
  Serial.begin(9600);
}

void loop()
{
  //  for (pos = 0; pos < 180; pos++)
  //  {
  //    pan.write(pos);
  //    delay(15);
  //  }

  //  for (pos = 180; pos > 0; pos--)
  //  {
  //    pan.write(pos);
  //    delay(15);
  //  }

  potval = analogRead(potpin);
  Serial.print(potval);
  Serial.print(" ");

  potval = map(potval, 0, 1023, 0, 179);
  Serial.print(potval);
  Serial.print(" ");

  Serial.println();

  pan.write(potval);
  delay(500);
}



