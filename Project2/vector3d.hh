#ifndef _VECTOR3D_HH_
#define _VECTOR3D_HH_

class Vector3d {
public:
	Vector3d();
	Vector3d(const double &, 
			 const double &,
			 const double &);
	~Vector3d();
	double getX();
	double getY();
	double getZ();
	void   setX(const double &);
	void   setY(const double &);
	void   setZ(const double &);
	
	Vector3d normalize();
	Vector3d negative();
	double dotProduct(Vector3d v);
	Vector3d crossProduct(Vector3d v);
	Vector3d addVector(Vector3d v);
	Vector3d subVector(Vector3d v);
	Vector3d multVector(double scalar);
	Vector3d divVector(Vector3d v);
	double getMagnitude();

protected:
	double x;
	double y;
	double z;
};

#endif // !_VECTOR3D_HH_

