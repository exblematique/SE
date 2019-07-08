#include <ostream>

class CartVec2D
{
	friend std::ostream& operator<<(std::ostream &os, const CartVec2D &rhs);
	friend CartVec2D operator+(const CartVec2D &lhs, const CartVec2D &rhs);
	friend CartVec2D operator-(const CartVec2D &lhs, const CartVec2D &rhs);
	friend CartVec2D operator-(const CartVec2D &hs);
	friend CartVec2D operator*(const CartVec2D &hs, const double &value);
	friend CartVec2D operator*(const double &value, const CartVec2D &hs);
	
	public:
		CartVec2D(double x, double y): x_{x}, y_{y}{}
		CartVec2D(): CartVec2D(0.0, 0.0){}
		CartVec2D(const CartVec2D &other) = default;
		CartVec2D& operator=(const CartVec2D &other) = default;
		~CartVec2D() = default;
		CartVec2D &operator+=(const CartVec2D &rhs);
		CartVec2D &operator-=(const CartVec2D &rhs);
		
		double length() const;
		void setX(double value);
		void setY(double value);
		double getX() const;
		double getY() const;
		
	private:
		double x_;
		double y_;
};