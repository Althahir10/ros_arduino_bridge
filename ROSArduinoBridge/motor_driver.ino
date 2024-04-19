#ifdef USE_BASE
   
#ifdef POLOLU_VNH5019
#elif defined Spark_Motor_Controller

// Define servo objects for left and right motors
Servo leftMotor;
Servo rightMotor;

void initMotorController()  {
  // Initialize servo objects
  leftMotor.attach(10);
  rightMotor.attach(11);
}

void setMotorSpeeds(int leftSpeed, int rightSpeed) {
  // Map speed values to servo positions
  int leftPosition = map(leftSpeed, -255, 255, 0, 180);
  int rightPosition = map(rightSpeed, -255, 255, 0, 180);

  // Set servo positions
  leftMotor.write(leftPosition);
  rightMotor.write(rightPosition);
}
#else
  #error A motor driver must be selected!
#endif

#endif
