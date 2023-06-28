#include <stdio.h>vvv

struct Sensor{ /* 2 marks for having sensor struct in correct place */
unsigned int SENSOR_ID;
unsigned int SENSOR_MODEL_NUMBER;
unsigned int SENSOR_LOCATION;
double SENSOR_CURRENT_READING;
double SENSOR_PREVIOUS_READING;
unsigned char SENSOR_ERROR_CODE;
}; /* 1 mark for correct syntax for struct */ 



int main(void) {
struct Sensor EEE_Sensor_1; /* 2 marks for correct initialisation of struct */
EEE_Sensor_1.SENSOR_ID = 1824;
EEE_Sensor_1.SENSOR_MODEL_NUMBER = 2022;
EEE_Sensor_1.SENSOR_LOCATION = 0161;
EEE_Sensor_1.SENSOR_CURRENT_READING = 0;
EEE_Sensor_1.SENSOR_PREVIOUS_READING = 0;
EEE_Sensor_1.SENSOR_ERROR_CODE = 0; /* 2 marks for correct variable
initialisation and syntax */
printf("%d",EEE_Sensor_1.SENSOR_ID);
return 0;
} 