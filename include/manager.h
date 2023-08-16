/*
Author: Kamil Koltowski
Date: 2023-08-14
Description:
*/
#ifndef MANAGER_H
#define MANAGER_H

#include <Arduino.h>
#include "battery.h"
#include "gearbox.h"
#include "temperature_sensor.h"
#include "display.h"

class Manager
{
private:
    Battery m_battery;
    Gearbox m_gearbox;
    TemperatureSensor m_temp_sensor;
    Display m_display;

public:
    Manager();
    Battery battery();
    Gearbox gearbox();
    TemperatureSensor temp_sensor();
    Display display();

    void run();

    int cpp_version();
};

#endif