//

#include <Servo.h>

Servo pan;

int pos = 0;

void setup()
{
  pan.attach(9);
}

void loop()
{
  for (pos = 0; pos < 180; pos++)
  {
    pan.write(pos);
    delay(15);
  }
  
  for (pos = 180; pos > 0; pos--)
  {
    pan.write(pos);
    delay(15);
  }
}

