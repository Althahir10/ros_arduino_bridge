#ifdef USE_BASE
   
#ifdef POLOLU_VNH5019
#elif defined Spark_Motor_Controller


  void initMotorController() {
    pinMode(RIGHT_MOTOR_PIN, OUTPUT);
    pinMode(LEFT_MOTOR_PIN, OUTPUT);
  }
  
  void setMotorSpeed(int i, int spd) {
    if (i == LEFT) {
      analogWrite(LEFT_MOTOR_PIN, spd);
    }
    else /*if (i == RIGHT)*/ {
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
