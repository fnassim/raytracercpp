#include "Camera.hh"

Camera::Camera(const Vector3d &_position,
			   const Vector3d &_direction, 
			   const Vector3d &_down,
			   const Vector3d &_right)
{
	position = _position;
	direction = _direction;
	down = _down;
	right = _right;
}

Vector3d Camera::getPosition() {
	return position;
}

Vector3d Camera::getDirection() {
	return direction;
}

void Camera::setRight(const Vector3d &_r) {
	right = _r;
}

void Camera::setDown(const Vector3d &_d) {
	down = _d;
}

Camera::~Camera() {}

Camera::Camera() {
	position  = Vector3d(0, 0, 0);
	direction = Vector3d(0, 0, 1);
	right = Vector3d(0, 0, 0);
	down = Vector3d(0, 0, 0);
}