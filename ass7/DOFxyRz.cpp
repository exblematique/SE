#include <math.h>

#include "DOFxyRz.h"

std::ostream& operator<<(std::ostream &os, const DOFxyRz &rhs) {
	os << "CartVec2D: " << rhs.vecXY_ << " and Rz:" << rhs.Rz_ ;
	return os;
}

DOFxyRz operator+(const DOFxyRz &lhs, const CartVec2D &rhs){
	DOFxyRz result(lhs);
	result += rhs;
	return result;
}

DOFxyRz operator-(const DOFxyRz &lhs, const CartVec2D &rhs){
	DOFxyRz result(lhs);
	result -= rhs;
	return result;
}

DOFxyRz &DOFxyRz::operator+(const double value){
	Rz_ += value;
	
	// With while loop:
	if (Rz_ > 0){
		while (Rz_ > M_PI) Rz_ -= 2*M_PI;
	} else {
		while (Rz_ < -M_PI) Rz_ += 2*M_PI;
	}
	
	/* I prefer using modulo to find the final result because it is more faster than loop
	 * M_PI is defined in math library */
	//Rz_ = fmod(Rz_, M_PI);
	
	return *this;
		
}

DOFxyRz &DOFxyRz::operator-(const double value){
	Rz_ -= value;
	Rz_ = fmod(Rz_, M_PI);
	return *this;
}


DOFxyRz &DOFxyRz::operator+=(const CartVec2D &rhs) {
	vecXY_.setX(vecXY_.getX() + rhs.getX());
	vecXY_.setY(vecXY_.getY() + rhs.getY());
	return *this;
}

DOFxyRz &DOFxyRz::operator-=(const CartVec2D &rhs) {
	vecXY_.setX(vecXY_.getX() - rhs.getX());
	vecXY_.setY(vecXY_.getY() - rhs.getY());
	return *this;
}

void DOFxyRz::setRz(double value) {Rz_ = value;}
double DOFxyRz::getRz() const {return Rz_;}

CartVec2D DOFxyRz::heading() const {
	CartVec2D out;
	out.setX(cos(Rz_));
	out.setY(sin(Rz_));
	double length = out.length();
	out.setX(cos(Rz_)/length);
	out.setY(sin(Rz_)/length);
	return out;
}