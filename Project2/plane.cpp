#include "plane.hh"
#include "vector3d.hh"

Plane::Plane() {
	normal = Vector3d(1, 0, 0);
	distance = 0;
}

Plane::Plane(Vector3d _n, double _d) {
	normal = _n;
	distance = _d;
}

Plane::~Plane() {};

Vector3d Plane::getNormalAt(Vector3d point) {
	return normal;
}

double Plane::findIntersection(Ray ray) {
	Vector3d ray_direction = ray.getDirection();
	double a = ray_direction.dotProduct(normal);

	if (a == 0)
		return -1;
	else 
	{
		double b = normal.dotProduct(ray.getOrigin().addVector(normal.multVector(distance).negative()));
		return -1 * b / a;
	}
}