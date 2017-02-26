#include "sphere.hh"

Sphere::Sphere(const Vector3d &_center, const double &_radius) {
	center = _center;
	radius = _radius;
}

Sphere::Sphere() {
	center = Vector3d(0,0,0);
	radius = 1.0;
}

void Sphere::setRadius(const double &_radius) {
	radius = _radius;
}

void Sphere::setCenter(const Vector3d &_center) {
	center = _center;
}

Sphere::~Sphere() {};