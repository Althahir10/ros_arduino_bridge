#ifdef USE_BASE
   
#ifdef POLOLU_VNH5019
#elif defined Spark_Motor_Controller


  void initMotorController() {
    pinMode(RIGHT_MOTOR_PIN, OUTPUT);
    pinMode(LEFT_MOTOR_PIN, OUTPUT);
  }


      
void setMotorSpeed(int i, int spd) {
  unsigned char reverse = 0;
  
  if (spd < 0) {
    spd = -spd;  // Make spd positive
    reverse = 1; // Set reverse to true
  }
  
  if (spd > 255) {
    spd = 255;   // Limit spd to 255
  }
  
  // Map spd to the range expected by the motor controller
  if (reverse) {
    spd = map(spd, 0, 255, 0, 90); // Map to 0-127 for reverse
  } else {
    spd = map(spd, 0, 255, 95, 180); // Map to 128-255 for forward
  }
  
  // Write the mapped spd value to the motor
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
