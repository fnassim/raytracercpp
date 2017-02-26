#ifndef _CAMERA_HH_
#define _CAMERA_HH_

#include "vector3d.hh"

class Camera {
public:
	Camera();
	~Camera();
	Camera(const Vector3d &, const Vector3d &, 
			const Vector3d &, const Vector3d &);
	Vector3d getPosition();
	Vector3d getDirection();
	Vector3d getRight();
	Vector3d getDown();
	void   setPosition(const Vector3d &);
	void   setDirection(const Vector3d &);
	void   setRight(const Vector3d &);
	void   setDown(const Vector3d &);
protected:
	Vector3d position;
	Vector3d right;
	Vector3d down;
	Vector3d direction;
};

#endif // !_Camera_HH_

