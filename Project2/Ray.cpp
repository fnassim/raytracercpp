#include "ray.hh"

Ray::Ray(const Vector3d &_origin,
	const Vector3d &_direction)
{
	origin = _origin;
	direction = _direction;
}

Vector3d Ray::getOrigin() {
	return origin;
}

Vector3d Ray::getDirection() {
	return origin;
}


void Ray::setOrigin(const Vector3d &_o) {
	origin = _o;
}

void Ray::setDirection(const Vector3d &_d) {
	direction = _d;
}

Ray::~Ray(){}

Ray::Ray() {
	origin = Vector3d(0,0,0);
	direction = Vector3d(1, 0, 0);
}