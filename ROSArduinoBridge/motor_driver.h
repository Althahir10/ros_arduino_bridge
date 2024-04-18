/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef Spark_Motor_Controller
#include <Servo.h>

Servo RIGHT_MOTOR_PWM; // Declare servo object for right motor
Servo LEFT_MOTOR_PWM;  // Declare servo object for left motor

//void initMotors() {
  //RIGHT_MOTOR_PWM.attach(11); // Attach right servo to pin 11
  //LEFT_MOTOR_PWM.attach(10);  // Attach left servo to pin 10

#define  RIGHT_MOTOR_PIN 11 // Attach right servo to pin 11
#define  LEFT_MOTOR_PIN  10  // Attach left servo to pin 10
//}


#endif
void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);





