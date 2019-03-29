#include "Motor.h"

#include <iostream>

using namespace std;

RotationMotor::RotationMotor()
   : rpm_(0)
   , start_(false)
{
}


void RotationMotor::start() {
  start_ = true;
}
    
void RotationMotor::shutdown() {
  if (start_){
    rpm_ = 0;
    exit(0);
  }
  else
    cout << "You need to execute start() before";   
}

void RotationMotor::restart(){
  if (start_)
    rpm_ = 0;
  else
    cout << "You need to execute start() before";
}

void RotationMotor::incRPM(){
  if (start_){
    if (rpm_+incr_ <= maxRPM_)
      rpm_ += incr_;
    else {
      rpm_ = maxRPM_;
      cout << "RPM motor has defined at the maximum: " << rpm_;
    }
  }
  else
    cout << "You need to execute start() before";
}

void RotationMotor::decRPM(){
  if (start_){
    if (rpm_-incr_ >= minRPM_)
      rpm_ -= incr_;
    else {
      rpm_ = minRPM_;
      cout << "RPM motor has defined at the minimum: " << rpm_;
    }
  }
  else
    cout << "You need to execute start() before";
}

int RotationMotor::getRPM() const {
    return rpm_;
}

