#ifndef _PLANE_HH_
#define _PLANE_HH_

#include "vector3d.hh"
#include "Object.hh"

class Plane : public Object {
public:
	Plane();
	Plane(Vector3d _n, double _d);
	void setDistance(const double &);
	void setNormal(const Vector3d &);
	~Plane();
	Vector3d getNormalAt(Vector3d point);
	double findIntersection(Ray ray);
private:
	Vector3d normal;
	double distance;
};

#endif // !_PLANE_HH_