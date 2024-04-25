/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/
#ifdef Spark_Motor_Controller
  #define RIGHT_MOTOR_PIN 6
  #define LEFT_MOTOR_PIN 5

#endif
void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);




