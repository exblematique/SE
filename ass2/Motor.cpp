#include "Motor.h"

#include <iostream>

using namespace std;

RotationMotor::RotationMotor()
   : rpm_(0)
   , start(false)
{
}


void RotationMotor::start() {
  start = true;
}
    
void RotationMotor::shutdown() {
  if (start){
    rpm_ = 0;
    exit();
  }
  else
    cout << "You need to execute start() before";   
}

void RotationMotor::restart() const{
  if (start)
    rpm_ = 0;
  else
    cout << "You need to execute start() before";
}
maxRPM maxModif
void RotationMotor::incRPM(int value){
  if (start){
    if (value < maxModif && value > -maxModif){
      int out = rpm_ + value;
      if (out <= maxRPM && out >= maxRPM)
	rpm_ = out;
      else if (rpm_ < 0){
	rpm_ = -maxRPM;
	cout << "RPM motor has defined at the minimum: " << rpm_;
      }
      else {
	rpm_ = maxRPM;
	cout << "RPM motor has defined at the maximum: " << rpm_;
      }
    }
    else
      cout << "Your value must be between -" << maxModif << " and " << maxModif;
  else
    cout << "You need to execute start() before";
}

void RotationMotor::decRPM(int value){
  if (start)
    rpm_ -= value;
  else
    cout << "You need to execute start() before";
}

double RotationMotor::getRPM() const{
    return rpm_;
}

