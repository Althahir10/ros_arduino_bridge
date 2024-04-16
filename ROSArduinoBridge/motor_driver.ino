
​
​
#ifdef USE_BASE
   
#ifdef POLOLU_VNH5019
#elif defined Spark_Motor_Controller

  void setMotorSpeed(int i, int spd) {
    if (i == LEFT) RIGHT_MOTOR_PWM.write(spd );
    else LEFT_MOTOR_PWM.write(spd );  }

  void setMotorSpeeds(int leftSpeed, int rightSpeed) {
    setMotorSpeed(LEFT, leftSpeed);
    setMotorSpeed(RIGHT, rightSpeed);                 }







/*  void initMotorController() {
    digitalWrite(RIGHT_MOTOR, HIGH);
    digitalWrite(LEFT_MOTOR, HIGH);
  }
 
  void setMotorSpeed(int i, int spd) {
    unsigned char reverse = 0;
 
    if (spd < 0)
    {
      spd = -spd;
      reverse = 1;
    }
    if (spd > 255)
      spd = 255;
   
    if (i == LEFT) {
      if      (reverse == 0) { LEFT_MOTOR_PWM.write(spd ); }
      else if (reverse == 1) { LEFT_MOTOR_PWM.write(spd ); }
    }
    else /*if (i == RIGHT) //no need for condition {
      if      (reverse == 0) { RIGHT_MOTOR_PWM.write(spd );}
      else if (reverse == 1) { RIGHT_MOTOR_PWM.write(spd );}
    }
  }
 
  void setMotorSpeeds(int leftSpeed, int rightSpeed) {
    setMotorSpeed(LEFT, leftSpeed);
    setMotorSpeed(RIGHT, rightSpeed);
  }*/
#else
  #error A motor driver must be selected!
#endif

#endif