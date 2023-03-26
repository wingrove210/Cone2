#include "Cone2.h"

void Cone2::setCoordinate(double X, double Y, double Z)
{
	x = X;
	y = Y;
	z = Z;
}
void Cone2::setRadius(double r)
{
	R = r;
}
void Cone2::setHeight(double h)
{
	H = h;
}
void Cone2::getCoordinate(double& X, double& Y, double& Z)
{
	X = x;
	Y = y;
	Z = z;
}
double Cone2::getRadius()
{
	return R;
}
double Cone2::getHeight()
{
	return H;
}

double Cone2::area()
{
	return PI * R * (R + sqrt(H * H + R * R));
}
double Cone2::volume()
{
	return PI * R * R * H / 3;
}

ostream& operator<<(ostream& stream, Cone2 obj)
{
	stream << "(" << obj.x << "; ";
	stream << obj.y << "; ";
	stream << obj.z << ") ";
	stream << "r = " << obj.R << " ";
	stream << "h = " << obj.H << "";
	return stream;
}

