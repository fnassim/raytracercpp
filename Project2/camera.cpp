#include "Camera.hh"

Camera::Camera(const Vector3d &_position,
			   const Vector3d &_w, 
			   const Vector3d &_up,
			   const Vector3d &_right,
			   const double &_dist)
{
	position = _position;
	w = _w;
	up = _up;
	right = _right;
	distance_screen = _dist;
}

Vector3d Camera::getPosition() {
	return position;
}

Vector3d Camera::getW() {
	return w;
}

Vector3d Camera::getUp() {
	return up;
}

Vector3d Camera::getRight() {
	return right;
}

double Camera::getScreenDist() {
	return distance_screen;
}

void Camera::setScreenDist(const double &_d) {
	distance_screen = _d;
}

void Camera::setPosition(const Vector3d &_pos) {
	position = _pos;
}

void Camera::setRight(const Vector3d &_r) {
	right = _r;
}

void Camera::setUp(const Vector3d &_up) {
	up = _up;
}

void Camera::setW(const Vector3d &_w) {
	w = _w;
}

Camera::~Camera() {}

Camera::Camera() {
}