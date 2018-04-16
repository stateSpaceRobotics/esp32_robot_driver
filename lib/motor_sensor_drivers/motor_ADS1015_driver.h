#ifndef MOTOR_ADS1015_DRIVER_ABC_H_
#define MOTOR_ADS1015_DRIVER_ABC_H_

#include <Arduino.h>
#include "../Adafruit_ADS1X15/Adafruit_ADS1015.h"
#include "motor_sensor_driver_ABC.h"

class MotorADS1015Driver :  public MotorSensorDriverABC
{
public:

  MotorADS1015Driver();
  MotorADS1015Driver(int);

  int update();

private:
  Adafruit_ADS1015 ads;
  int16_t prev_adcs[4];
};

#endif