#ifdef USE_BASE
#ifdef POLOLU_VNH5019
#elif defined Spark_Motor_Controller //Spark motor macro
void setMotorSpeed(int i, int spd) {
  if (spd > 130) {
    spd = 130;   // Limit speed to 255
  } else if (spd < 0) {
    spd = 0;     // Limit speed to 0
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
