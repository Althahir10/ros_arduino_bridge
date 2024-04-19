/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/
#ifdef Spark_Motor_Controller
#include <Servo.h>

// Define servo objects for left and right motors
extern Servo leftMotor;
extern Servo rightMotor;

#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);




