#include "light.hh"


Light::Light(const Vector3d &_position) {
	position = _position;
}

Light::~Light(){}

Light::Light() {
	position = Vector3d(50, 0, 0);
}