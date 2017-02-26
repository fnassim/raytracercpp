#include "vector3d.hh"
#include <math.h>

Vector3d::Vector3d(const double &_x, 
		const double &_y, 
		const double &_z) 
{
	x = _x;
	y = _y;
	z = _z;
}

double Vector3d::getX() {
	return x;
}

double Vector3d::getY() {
	return y;
}

double Vector3d::getZ() {
	return z;
}

void Vector3d::setX(const double &_x) {
	x = _x;
}

void Vector3d::setY(const double &_y) {
	y = _y;
}
void Vector3d::setZ(const double &_z) {
	z = _z;
}

Vector3d::~Vector3d(){}

Vector3d::Vector3d() {

}

double Vector3d::getMagnitude() {
	return sqrt((x * x) + (y * y) + (z * z));
}

Vector3d Vector3d::normalize() {
	double magnitude = getMagnitude();
	return Vector3d (x/magnitude, y/magnitude, z/magnitude);
}

Vector3d Vector3d::negative() {
	return Vector3d(-x, -y, -z);
}

double Vector3d::dotProduct(Vector3d v) {
	return x*v.getX() + y*v.getY() + z*v.getZ();
}

Vector3d Vector3d::crossProduct(Vector3d v) {
	return Vector3d(y*v.getZ() - z*v.getY(), z*v.getX() - x*v.getZ(), x*v.getY() - y*v.getX());
}

Vector3d Vector3d::addVector(Vector3d v) {
	return Vector3d(x + v.getX(), y + v.getY(), z + v.getZ());
}

Vector3d Vector3d::subVector(Vector3d v) {
	return Vector3d(x - v.getX(), y - v.getY(), z - v.getZ());
}

Vector3d Vector3d::multVector(double scalar) {
	return Vector3d(x * scalar, y * scalar, z * scalar);
}