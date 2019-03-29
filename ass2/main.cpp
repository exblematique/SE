#include "Motor.h"

#include <iostream>

using namespace std;

int main()
{
   RotationMotor r1;

   r1.restart();
   r1.start();
   
   r1.incRPM();
   cout << "RPM: " << r1.getRPM() << endl;
   r1.incRPM();
   r1.incRPM();
   r1.incRPM();
   r1.incRPM();
   r1.incRPM();
   r1.incRPM();
   r1.incRPM();
   r1.incRPM();
   cout << "RPM: " << r1.getRPM() << endl;
   r1.decRPM();
   cout << "RPM: " << r1.getRPM() << endl;
   r1.restart();
   cout << "RPM: " << r1.getRPM() << endl;

   r1.decRPM();
   r1.decRPM();
   r1.decRPM();
   r1.decRPM();
   r1.decRPM();
   r1.decRPM();
   r1.decRPM();
   r1.decRPM();
   r1.decRPM();
   r1.decRPM();
   r1.decRPM();
   cout << "RPM: " << r1.getRPM() << endl;
     
   r1.shutdown();
   cout << "Don't display this message";
   return 0;
}
