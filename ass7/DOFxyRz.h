#include <ostream>

#include "CartVec2D.h"

class DOFxyRz
{
	friend std::ostream& operator<<(std::ostream &os, const DOFxyRz &rhs);
	friend DOFxyRz operator+(const DOFxyRz &lhs, const CartVec2D &rhs);
	friend DOFxyRz operator-(const DOFxyRz &lhs, const CartVec2D &rhs);
	
	public:
		DOFxyRz(double x, double y): vecXY_{x, y}, Rz_{0.0} {}
		DOFxyRz(): DOFxyRz(0.0, 0.0){}
		DOFxyRz(const DOFxyRz &other) = default;
		DOFxyRz& operator=(const DOFxyRz &other) = default;
		~DOFxyRz() = default;
		
		DOFxyRz &operator+(const double value);
		DOFxyRz &operator-(const double value);
		DOFxyRz &operator+=(const CartVec2D &rhs);
		DOFxyRz &operator-=(const CartVec2D &rhs);
		
		void setRz(double value);
		double getRz() const;
		CartVec2D heading() const;
		
	private:
		CartVec2D vecXY_;
		double Rz_;
};