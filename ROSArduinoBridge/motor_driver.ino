#ifdef USE_BASE
#ifdef POLOLU_VNH5019
#elif defined Spark_Motor_Controller //Spark motor macro

void setMotorSpeed(int i, int spd) {
  int reverse = 0;

  if (spd < 0) {
    spd = -spd;  // Make speed positive
    reverse = 1; // Note the direction
  }

  // Map speed to appropriate PWM value for Spark Motor Controller
  if (reverse) {
    spd = map(spd, 0, 255, 1000, 1460); // Full reverse to neutral
  } else {
    spd = map(spd, 0, 255, 1540, 2000); // Neutral to full forward
  }

  if (i == LEFT) {
    analogWrite(LEFT_MOTOR_PIN, spd);
  } else /*if (i == RIGHT)*/ {
    analogWrite(RIGHT_MOTOR_PIN, spd);
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
