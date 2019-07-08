#include <iostream>

#include "DOFxyRz.h"

using namespace std;

int main(void)
{
	
	cout << endl << "Creating dof1=[-2.0, 1.0] and cv1=[2.5, 1.5]" << endl;
	DOFxyRz dof1{-9.0, 1.0};
	CartVec2D cv1{2.5, 1.5};
	
	cout << endl << "Testing operator:" << endl;
	cout<< "dof1 + cv1 = " << dof1 + cv1 << endl;
	cout<< "dof1 - cv1 = " << dof1 - cv1 << endl;
	
	cout << endl << "Handing of dof1: " << dof1.heading() << endl;
	cout << "dof1 + 6.5 = " << dof1 + 6.5 << endl;
	cout << "Handing of dof1: " << dof1.heading() << endl;
	
	cout << endl << "dof1 - 6.5 = " << dof1 - 6.5 << endl;
	cout << "Handing of dof1: " << dof1.heading() << endl;
	
	dof1 += cv1;
	cout << endl << "dof1 += cv1: dof1=" << dof1 << " cv1=" << cv1 << endl;
	
	dof1 -= cv1;
	cout << "dof1 -= cv1: dof1=" << dof1 << " cv1=" << cv1 << endl;
	
	return 0;
}