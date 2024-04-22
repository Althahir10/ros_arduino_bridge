/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/
#ifdef Spark_Motor_Controller
#include <Servo.h>
Servo leftMotor, rightMotor;
  #define RIGHT_MOTOR_PIN 9
  #define LEFT_MOTOR_PIN 10

#endif
void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);




