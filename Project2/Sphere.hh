#ifndef _SPHERE_HH_
#define _SPHERE_HH_

#include "vector3d.hh"
#include "Object.hh"

class Sphere : public Object {
public:
	Sphere();
	void setRadius(const double &);
	void setCenter(const Vector3d &);
	~Sphere();
	Sphere(const Vector3d &, const double &);
private:
	Vector3d center;
	double radius;
};

#endif // !_SPHERE_HH_
