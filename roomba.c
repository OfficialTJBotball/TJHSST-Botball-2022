#include <kipr/botball.h>

int main() // grabs the pompoms and return them to home
{
  create_connect();
  int leftColorSensorPin = 1;
  int rightColorSensorPin = 2;

  int servo0Pin = 0;
  create_drive_straight(20); // drive forward
  msleep(1000);              // delay
  create_spin_CW(100);       // spin right

  if (get_analog_pullup(leftColorSensorPin) > 3000 && get_analog_pullup(rightColorSensorPin) > 3000)
  {                                                                                                       // if currently on black line
    while (get_analog_pullup(leftColorSensorPin) > 3000 && get_analog_pullup(rightColorSensorPin) > 3000) // follow line until the pom poms are collected (line tracking)
    {
      create_drive_straight(20); // drive forward
      msleep(100);               // delay
      if (get_analog_pullup(leftColorSensorPin) > 3000 && get_analog_pullup(rightColorSensorPin) < 3000)
      {
        create_spin_CCW(100); // rotate left
        msleep(100);          // delay
      }
      if (get_analog_pullup(leftColorSensorPin) < 3000 && get_analog_pullup(rightColorSensorPin) > 3000)
      {
        create_spin_CW(100); // rotate right
        msleep(100);         // delay
      }
    }
  }
  enable_servos();
  set_servo_position(servo0Pin, 1525); // move servo up
  create_drive_straight(30);           // drive forward
  msleep(500);                         // delay
  set_servo_position(servo0Pin, 2000); // move servo down to drag rectangle
  disable_servos();

  create_drive_straight(-50); // drive backward
  msleep(5000);               // delay
  create_spin_CCW(100);       // spin left
  msleep(1000);               // delay
  create_drive_straight(-50); // drive backward back to home base
  msleep(2000);               // delay

  return 0;
}
