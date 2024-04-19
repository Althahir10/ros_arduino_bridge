/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/
#ifdef Spark_Motor_Controller
#include <Servo.h>

  #define RIGHT_MOTOR_PIN 10
  #define LEFT_MOTOR_PIN 11

#endif
void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);




