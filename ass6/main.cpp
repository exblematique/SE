#include<iostream>

#include "CartVec2D.h"

using namespace std;

int main(void)
{
	cout << endl << "Creating cv1=[-2.0, 1.0] and cv2=[2.5, 1.5]" << endl;
	CartVec2D cv1{-2.0, 1.0};
	CartVec2D cv2{2.5, 1.5};
	cout << "Length of cv1 is " << cv1.length() << " and cv2 is " << cv2.length() << endl << endl;
	
	cout << "Testing operator:" << endl;
	cout << "cv1 + cv2 = " << cv1 + cv2 << endl; 
	cout << "cv1 - cv2 = " << cv1 - cv2 << endl; 
	cout << "cv1 * 3.0 = " << cv1 * 3.0 << endl; // [-6.0, 3.0]
	cout << "3.0 * cv1 = " << 3.0 * cv1 << endl; // [-6.0, 3.0]
	
	cv1 += cv2;
	cout << "cv1 += cv2: cv1=" << cv1 << " cv2=" << cv2 << endl;
	
	cv1 -= cv2;
	cout << "cv1 -= cv2: cv1=" << cv1 << " cv2=" << cv2 << endl;
	
	// Unary – operator.
	cout << "-cv1 = " << -cv1 << endl;
	
	cv1.setX(1.0);
	cv1.setY(-1.0);
	cout << "New cv1 values: x_=" << cv1.getX() << " and y_=" << cv1.getY() << endl;
	
	cout << "(2.1 * -cv1) + cv2 = " << (2.1 * -cv1) + cv2 << endl;
	
	return 0;
}