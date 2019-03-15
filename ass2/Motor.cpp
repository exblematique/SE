#include "Motor.h"

#include <iostream>

using namespace std;

RotationMotor::RotationMotor()
   : width_(1.0)
   , height_(1.0)
{
}


void RotationMotor::start()
{
    
}

void RotationMotor::shutdown()
{
   
}
    
void RotationMotor::restart()
{
    
}

void RotationMotor::incRPM(int value)
{

}

void RotationMotor::decRPM(int value)
{

}
    
int RotationMotor::getRPM() const
{
  return width_ * height_;
}
