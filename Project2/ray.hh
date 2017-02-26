#ifndef _RAY_HH_
#define _RAY_HH_

#include "vector3d.hh"

class Ray {
public:
	Ray();
	Ray(const Vector3d &, const Vector3d &);
	~Ray();
	Vector3d getOrigin();
	Vector3d getDirection();
	void   setOrigin(const Vector3d &);
	void   setDirection(const Vector3d &);
protected:
	Vector3d origin;
	Vector3d direction;
};

#endif // !_RAY_HH_

