#ifndef _OBJECT_HH_
#define _OBJECT_HH_

#include "vector3d.hh"
#include "ray.hh"
#include <string>

class Object {
public:
	Object();
	std::string getColor();
	double interObject(Ray);
};

#endif // !_OBJECT_HH_
