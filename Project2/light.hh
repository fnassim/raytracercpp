#ifndef _LIGHT_HH_
#define _LIGHT_HH_

#include "vector3d.hh"

class Light {
public:
	Light();
	Light(const Vector3d &);
	~Light();
	Vector3d getPosition();
	// Vector3d getColor();
	void   setPosition(const Vector3d &);
	// void   setColor(const Color &);
protected:
	Vector3d position;
	// Color color;
};

#endif // !_LIGHT_HH_

