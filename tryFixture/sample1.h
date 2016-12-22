#include<iostream>

class thermometer
{
public:
    thermometer(float t);
    ~thermometer();
    void  setTempurature(float tempurature);
    float getTempurature();
    bool  operator < (thermometer &rhs);
private:
    float _tempurature;
};
