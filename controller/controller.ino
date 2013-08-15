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
  Serial.println();

  potval = map(potval, 0, 1023, 0, 179);

  print_state();

  pan.write(potval);
  delay(500);
}

void print_state()
{
  Serial.print("PAN: ");
  Serial.print(potval);

  Serial.println();
}



