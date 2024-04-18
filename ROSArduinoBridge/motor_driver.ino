/***************************************************************
   Motor driver definitions
   
   Add a "#elif defined" block to this file to include support
   for a particular motor driver.  Then add the appropriate
   #define near the top of the main ROSArduinoBridge.ino file.
   
   *************************************************************/

#ifdef USE_BASE
   
#ifdef POLOLU_VNH5019
#elif defined Spark_Motor_Controller
void initMotorController(){
  LEFT_MOTOR_PWM.attach(LEFT_MOTOR_PIN);
  RIGHT_MOTOR_PWM.attach(RIGHT_MOTOR_PIN);
}

  void setMotorSpeed(int i, int spd) {
    unsigned char reverse = 0;
  
    // Reverse direction if speed is negative
    if (spd < 0) {
        spd = -spd;
        reverse = 1;
    }
    if (spd > 255)
        spd = 255;
    
    // Set speed based on direction
    if (i == LEFT) {
        if (reverse == 0) {
            LEFT_MOTOR_PWM.writeMicroseconds(1500 + spd); // Center position + speed
        } else if (reverse == 1) {
            LEFT_MOTOR_PWM.writeMicroseconds(1500 - spd); // Center position - speed
        }
    } else {
        if (reverse == 0) {
            RIGHT_MOTOR_PWM.writeMicroseconds(1500 + spd); // Center position + speed
        } else if (reverse == 1) {
            RIGHT_MOTOR_PWM.writeMicroseconds(1500 - spd); // Center position - speed
        }
    }
}

  void setMotorSpeeds(int leftSpeed, int rightSpeed) {
    setMotorSpeed(LEFT, leftSpeed);
    setMotorSpeed(RIGHT, rightSpeed);
                                                      }





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
