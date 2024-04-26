/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/
//#include <Servo.h>
#ifdef Spark_Motor_Controller
  #define LEFT_MOTOR_PIN 5
  #define RIGHT_MOTOR_PIN 6

#endif
    //Servo leftMotor, rightMotor;
void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);





