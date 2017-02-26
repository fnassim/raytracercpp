#include <stdio.h>
#include <SDL.h>
#include "Engine.hh"
#include "vector3d.hh"
#include "ray.hh"
#include "Camera.hh"

#define SCREEN_X = 1024;
#define SCREEN_Y = 768;

int wmain() {
	Engine engine(1024, 768, "Raytracer");
	
	Vector3d x(1, 0, 0);
	Vector3d y(0, 1, 0);
	Vector3d z(0, 0, 1);

	Vector3d campos(3, 1.5, -4);
	Vector3d look_at(0, 0, 0);

	Vector3d diff_btw(campos.getX() - look_at.getX(),
		campos.getY() - look_at.getY(),
		campos.getZ() - look_at.getZ());

	Vector3d camdir = diff_btw.negative().normalize();
	Vector3d camright = y.crossProduct(camdir).normalize();
	Vector3d camdown = camright.crossProduct(camdir);
	
	Camera scene_cam(campos, camdir, camdown, camright);

	engine.fireRays();
	
	engine.mainLoop();
	return 0;
}
