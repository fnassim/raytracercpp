#ifndef _CAMERA_HH_
#define _CAMERA_HH_

#include "vector3d.hh"

class Camera {
public:
	Camera();
	~Camera();
	Camera(const Vector3d &, const Vector3d &, 
			const Vector3d &, const Vector3d &, const double &);
	Vector3d getPosition();
	Vector3d getW();
	Vector3d getUp();
	Vector3d getRight();
	double getScreenDist();
	void setScreenDist(const double & _d);
	void setPosition(const Vector3d &);
	void setRight(const Vector3d &);
	void setUp(const Vector3d & _up);
	void setW(const Vector3d & _w);
protected:
	Vector3d position;
	Vector3d right;
	Vector3d up;
	Vector3d w;
	double distance_screen;
};

#endif // !_Camera_HH_

