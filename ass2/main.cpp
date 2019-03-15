#include "Motor.h"

#include <iostream>

using namespace std;

int main()
{
   RotationMotor r1;

   r1.restart();
   r1.start();
   
   r1.setWidth(r2.getWidth() * r2.getWidth());
   
   cout << "r2 = ";
   r2.print();
   cout << endl;
   cout << "Surface area r2 = " << r2.surfaceArea() << endl;

   return 0;
}
