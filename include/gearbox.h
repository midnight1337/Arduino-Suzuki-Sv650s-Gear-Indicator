#include "defined_variables.h"

#ifndef GEARBOX_H
#define GEARBOX_H

class Gearbox
{
private:
    int m_gear;
    float m_gear_voltage;

    void read_gear_voltage_from_gearbox();
    void convert_adc_value_to_voltage(int adc_value);
    void determine_gear();

public:
    Gearbox();
    int gear();
    void read_gear();
};

#endif
