#include <kipr/botball.h>

int main()
{
  create_connect();
  int leftWheelMotor = 0;
  int rightWheelMotor = 1;
  int clawOpenerMotor = 2;
  int claw0Pin = 0; // moving claw up/down
  int claw1Pin = 1; // moving claw left/right
  int claw2Pin = 2; // moving claw up/down to be level with the ground

  // navigate to the rings

  motor(leftWheelMotor, 50);
  motor(rightWheelMotor, 50);
  msleep(200);

  motor(rightWheelMotor, 50);
  msleep(300);

  motor(leftWheelMotor, 50);
  motor(rightWheelMotor, 50);
  msleep(200);

  // enable servos

  enable_servos();

  // pick up red ring

  set_servo_position(claw0Pin, 1000); // move claw up
  motor(clawOpenerMotor, 50)          // open claw
      msleep(50);
  motor(clawOpenerMotor, -50) // close claw
      msleep(50);

  set_servo_position(claw0Pin, 700); // move claw up

  motor(leftWheelMotor, -50); // move back
  motor(rightWheelMotor, -50);
  msleep(200);

  motor(leftWheelMotor, 50); // move up
  motor(rightWheelMotor, 50);
  msleep(30);

  motor(leftWheelMotor, 25); // turn right
  motor(rightWheelMotor, -25);
  msleep(60);

  set_servo_position(claw1Pin, 1400); // rotate claw right
  motor(leftWheelMotor, -20);         // move back
  motor(rightWheelMotor, -20);
  msleep(300);

  motor(clawOpenerMotor, 50) // open claw
      msleep(50);
  motor(leftWheelMotor, 20); // move forward
  motor(rightWheelMotor, 20);
  msleep(300);

  set_servo_position(claw1Pin, 700); // rotate claw left
  motor(leftWheelMotor, -25);        // turn left
  motor(rightWheelMotor, 25);
  msleep(60);

  motor(leftWheelMotor, 50); // move forward
  motor(rightWheelMotor, 50);
  msleep(200);

  // pick up orange ring

  set_servo_position(claw0Pin, 1150); // move claw up
  motor(clawOpenerMotor, 50)          // open claw
      msleep(50);
  motor(clawOpenerMotor, -50) // close claw
      msleep(50);

  set_servo_position(claw0Pin, 700); // move claw up

  motor(leftWheelMotor, -50); // move back
  motor(rightWheelMotor, -50);
  msleep(200);

  motor(leftWheelMotor, 50); // move up
  motor(rightWheelMotor, 50);
  msleep(30);

  motor(leftWheelMotor, 25); // turn right
  motor(rightWheelMotor, -25);
  msleep(60);

  set_servo_position(claw1Pin, 1300); // rotate claw right
  motor(leftWheelMotor, -20);         // move back
  motor(rightWheelMotor, -20);
  msleep(300);

  motor(clawOpenerMotor, 50) // open claw
      msleep(50);
  motor(leftWheelMotor, 20); // move forward
  motor(rightWheelMotor, 20);
  msleep(300);

  set_servo_position(claw1Pin, 700); // rotate claw left
  motor(leftWheelMotor, -25);        // turn left
  motor(rightWheelMotor, 25);
  msleep(60);

  motor(leftWheelMotor, 50); // move forward
  motor(rightWheelMotor, 50);
  msleep(200);

  // pick up yellow ring

  set_servo_position(claw0Pin, 1450); // move claw up
  motor(clawOpenerMotor, 50)          // open claw
      msleep(50);
  motor(clawOpenerMotor, -50) // close claw
      msleep(50);

  set_servo_position(claw0Pin, 700); // move claw up

  motor(leftWheelMotor, -50); // move back
  motor(rightWheelMotor, -50);
  msleep(200);

  motor(leftWheelMotor, 50); // move up
  motor(rightWheelMotor, 50);
  msleep(30);

  motor(leftWheelMotor, 25); // turn right
  motor(rightWheelMotor, -25);
  msleep(60);

  set_servo_position(claw1Pin, 1400); // rotate claw right
  motor(leftWheelMotor, -20);         // move back
  motor(rightWheelMotor, -20);
  msleep(300);

  motor(clawOpenerMotor, 50) // open claw
      msleep(50);
  motor(leftWheelMotor, 20); // move forward
  motor(rightWheelMotor, 20);
  msleep(300);

  set_servo_position(claw1Pin, 700); // rotate claw left
  motor(leftWheelMotor, -25);        // turn left
  motor(rightWheelMotor, 25);
  msleep(60);

  motor(leftWheelMotor, 50); // move forward
  motor(rightWheelMotor, 50);
  msleep(200);

  // pick up green ring

  set_servo_position(claw0Pin, 1650); // move claw up
  motor(clawOpenerMotor, 50)          // open claw
      msleep(50);
  motor(clawOpenerMotor, -50) // close claw
      msleep(50);

  set_servo_position(claw0Pin, 700); // move claw up

  motor(leftWheelMotor, -50); // move back
  motor(rightWheelMotor, -50);
  msleep(200);

  motor(leftWheelMotor, 50); // move up
  motor(rightWheelMotor, 50);
  msleep(30);

  motor(leftWheelMotor, 25); // turn right
  motor(rightWheelMotor, -25);
  msleep(60);

  set_servo_position(claw1Pin, 1400); // rotate claw right
  motor(leftWheelMotor, -20);         // move back
  motor(rightWheelMotor, -20);
  msleep(300);

  motor(clawOpenerMotor, 50) // open claw
      msleep(50);
  motor(leftWheelMotor, 20); // move forward
  motor(rightWheelMotor, 20);
  msleep(300);

  set_servo_position(claw1Pin, 700); // rotate claw left
  motor(leftWheelMotor, -25);        // turn left
  motor(rightWheelMotor, 25);
  msleep(60);

  motor(leftWheelMotor, 50); // move forward
  motor(rightWheelMotor, 50);
  msleep(200);

  // pick up blue ring

  set_servo_position(claw0Pin, 1800); // move claw up
  motor(clawOpenerMotor, 50)          // open claw
      msleep(50);
  motor(clawOpenerMotor, -50) // close claw
      msleep(50);

  set_servo_position(claw0Pin, 700); // move claw up

  motor(leftWheelMotor, -50); // move back
  motor(rightWheelMotor, -50);
  msleep(200);

  motor(leftWheelMotor, 50); // move up
  motor(rightWheelMotor, 50);
  msleep(30);

  motor(leftWheelMotor, 25); // turn right
  motor(rightWheelMotor, -25);
  msleep(60);

  set_servo_position(claw1Pin, 1400); // rotate claw right
  motor(leftWheelMotor, -20);         // move back
  motor(rightWheelMotor, -20);
  msleep(300);

  motor(clawOpenerMotor, 50) // open claw
      msleep(50);
  motor(leftWheelMotor, 20); // move forward
  motor(rightWheelMotor, 20);
  msleep(300);

  set_servo_position(claw1Pin, 700); // rotate claw left
  motor(leftWheelMotor, -25);        // turn left
  motor(rightWheelMotor, 25);
  msleep(60);

  motor(leftWheelMotor, 50); // move forward
  motor(rightWheelMotor, 50);
  msleep(200);

  disable_servos();

  return 0;
}
}