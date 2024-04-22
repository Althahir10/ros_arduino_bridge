
#ifdef USE_BASE
   
#ifdef POLOLU_VNH5019
#elif defined Spark_Motor_Controller


  void initMotorController() {
    pinMode(RIGHT_MOTOR_PIN, OUTPUT);
    pinMode(LEFT_MOTOR_PIN, OUTPUT);
  }


      
  void setMotorSpeed(int i, int spd) {
      unsigned char reverse = 0;
           // Map spd from -255-255 to 1000-2000
      spd = map(spd, -255, 255, 1000, 2000);
      if (spd < 0)
    {

      spd = -spd;
      reverse = 1;
    }
    if (spd > 255)
      spd = 255;

      
    if (i == LEFT) {
      if      (reverse == 0){analogWrite(LEFT_MOTOR_PIN, spd);}
      else if (reverse == 1){analogWrite(LEFT_MOTOR_PIN, -spd);}
      
    }
    else /*if (i == RIGHT)*/ {
      if      (reverse == 0){analogWrite(RIGHT_MOTOR_PIN, spd);}
      if      (reverse == 1){analogWrite(RIGHT_MOTOR_PIN, -spd);}
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
