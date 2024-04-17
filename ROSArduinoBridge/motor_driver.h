/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/




#ifdef Spark_Motor_Controller
#include <Servo.h>

Servo RIGHT_MOTOR_PWM; // Declare servo object for right motor
Servo LEFT_MOTOR_PWM;  // Declare servo object for left motor

void initMotors() {
  RIGHT_MOTOR_PWM.attach(12); // Attach right servo to pin 12
  LEFT_MOTOR_PWM.attach(13);  // Attach left servo to pin 13
}


#endif
//void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);



/*#define RIGHT_MOTOR_BACKWARD 5
  #define LEFT_MOTOR_BACKWARD  6
  #define RIGHT_MOTOR_FORWARD  9
  #define LEFT_MOTOR_FORWARD   10
  #define RIGHT_MOTOR_ENABLE 12
  #define LEFT_MOTOR_ENABLE 13
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);*/


