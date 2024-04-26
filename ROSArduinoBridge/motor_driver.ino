
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
      //reverse = 1;
    }
    if (spd > 255)
      spd = 255;
  int pwm;

  if (spd >= 0) {
    // Map forward speed to appropriate PWM value
    pwm = map(spd, 0, 255, 1535, 2000); // Neutral to full forward
  } else {
    // Map reverse speed to appropriate PWM value
    pwm = map(-spd, 0, 255, 1465, 1000); // Full reverse to neutral
  }

  if (i == LEFT) {
    //analogWrite(leftMotor, pwm);
    leftMotor.writeMicroseconds(spd);
  } else /*if (i == RIGHT)*/ {
    //analogWrite(rightMotor, pwm);
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
