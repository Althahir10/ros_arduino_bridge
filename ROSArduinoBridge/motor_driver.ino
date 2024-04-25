
#ifdef USE_BASE
#ifdef POLOLU_VNH5019
#elif defined Spark_Motor_Controller //Spark motor macro


void initMotorController() {
  leftMotor.attach(LEFT_MOTOR_PIN);
  rightMotor.attach(RIGHT_MOTOR_PIN);

}


void setMotorSpeed(int i, int spd) {

    if (spd < 0)
    {
      spd = -spd;
//      reverse = 1;
    }
    if (spd > 255)
      spd = 255;


if (i == LEFT) {
    leftMotor.writeMicroseconds(spd);
  } else /*if (i == RIGHT)*/ {
    rightMotor.writeMicroseconds(spd);
  }
  }


void setMotorSpeeds(int leftSpeed, int rightSpeed) {
  setMotorSpeed(LEFT, leftSpeed);
  setMotorSpeed(RIGHT, rightSpeed);
}

#else
#error A motor driver must be selected!
#endif

#endif
