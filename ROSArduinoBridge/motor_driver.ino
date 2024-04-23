#ifdef USE_BASE
   
#ifdef POLOLU_VNH5019
#elif defined Spark_Motor_Controller

   
void setMotorSpeed(int i, int spd) {
  //spd = map(spd, 0, 255, 1000, 2000);
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
