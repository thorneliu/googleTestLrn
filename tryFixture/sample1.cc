#include "sample1.h"


thermometer::thermometer(float t):_tempurature(t){}
thermometer::~thermometer(){}

void  thermometer::setTempurature(float tempurature)
{
    _tempurature = tempurature;
}

float thermometer::getTempurature()
{
    return _tempurature;
}

bool  thermometer::operator < (thermometer &rhs)
{
    return this->_tempurature < rhs._tempurature;
}; 
