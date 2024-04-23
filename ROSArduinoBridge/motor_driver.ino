#ifdef USE_BASE
   
#ifdef POLOLU_VNH5019
#elif defined Spark_Motor_Controller

   
void setMotorSpeed(int i, int spd) {
  unsigned char reverse = 0;
  if (spd < 0) {
    spd = -spd;  // Make speed positive
    reverse = 1; // Note the direction
  }
  if (spd > 255) {
    spd = 255;   // Limit speed to 255
  }

  // If reverse, subtract speed from 255
  if (reverse) {
    spd = 255 - spd;
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
