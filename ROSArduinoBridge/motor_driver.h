/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/
#ifdef Spark_Motor_Controller
#include <Servo.h>
// Modify the servoPins array to specify the PWM pins connected to the motor controller
byte motorPins[N_SERVOS] = { 10, 11 };

#endif

void setMotorSpeeds(int servoIndex, int speed); 



