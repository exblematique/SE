#include <math.h>

#include "CartVec2D.h"

std::ostream& operator<<(std::ostream &os, const CartVec2D &rhs) {
	os << "[" << rhs.x_ << ", " << rhs.y_ << "]";
	return os;
}

CartVec2D operator+(const CartVec2D &lhs, const CartVec2D &rhs){
	CartVec2D result;
	result += lhs;
	result += rhs;
	return result;
}

CartVec2D operator-(const CartVec2D &lhs, const CartVec2D &rhs){
	CartVec2D result;
	result += lhs;
	result -= rhs;
	return result;
}

CartVec2D operator-(const CartVec2D &hs){
	CartVec2D result;
	result -= hs;
	return result;
}

CartVec2D operator*(const CartVec2D &hs, const double &value){
	CartVec2D result;
	result.x_ = hs.x_ * value;
	result.y_ = hs.y_ * value;
	return result;
}

CartVec2D operator*(const double &value, const CartVec2D &hs){
	CartVec2D result;
	result.x_ = hs.x_ * value;
	result.y_ = hs.y_ * value;
	return result;
}

CartVec2D &CartVec2D::operator+=(const CartVec2D &rhs) {
	x_ += rhs.x_;
	y_ += rhs.y_;
	return *this;
}

CartVec2D &CartVec2D::operator-=(const CartVec2D &rhs) {
	x_ -= rhs.x_;
	y_ -= rhs.y_;
	return *this;
}
		
double CartVec2D::length() const {return sqrt(pow(x_,2) + pow(y_,2));}
void CartVec2D::setX(double value) {x_ = value;}
void CartVec2D::setY(double value) {y_ = value;}
double CartVec2D::getX() const {return x_;}
double CartVec2D::getY() const {return y_;}
