#include <stdio.h>
#include <SDL.h>
#include "Engine.hh"
#include "vector3d.hh"
#include "ray.hh"
#include "Camera.hh"
#include "light.hh"
#include "Sphere.hh"
#include "Object.hh"
#include "plane.hh"
#include <vector>
#include <iostream>


#define SCREEN_X = 1024;
#define SCREEN_Y = 768;

int wmain() {
	int aspectratio = (double)1024 / (double)768;
	Engine engine(1024, 768, "Raytracer");
	
	// orientation du repere de la camera basé sur C,U,V,W
	Vector3d t(0, 1, 0);

	// Taille des pixels a parcourir
	int pitch_x, pitch_y;

	// REPERE R INITIAL
	Vector3d e1(1, 0, 0);
	Vector3d e2(0, 1, 0);
	Vector3d e3(0, 0, 1);

	// 
	Vector3d campos(3, 1, -4);
	Vector3d look_at(0, 0, 0);

	// Vecteur indicateur du look_at
	Vector3d w(campos.getX() - look_at.getX(),
			campos.getY() - look_at.getY(),
			campos.getZ() - look_at.getZ());

	// Vecteur indicateur de la direction de la caméra
	//Vector3d camdir = w.normalize();

	// Distance entre la cam et l'écran
	double distance_screen = w.getMagnitude();

	 Vector3d camright = t.crossProduct(w).normalize();
	 Vector3d camup = camright.crossProduct(w);
	
	Camera scene_cam(campos, w, camup, camright, distance_screen);
	Light light(Vector3d(0,0,0));
	Sphere(Vector3d(0,0,0), 3.0);
	Plane(e2, -1);
	//engine.fireRays();
	
	

		for (int y = 0; y <= 768; y++) {
			for (int x = 0; x <= 1024; x++) {
				Vector3d cam_ray_origin = scene_cam.getPosition();
		//	    Vector3d cam_ray_direction = scene_cam.getDirection().multVector(y).addVector(camup.multVector(x).normalize());
		//		Ray cam_ray(cam_ray_origin, cam_ray_direction);
				engine.drawPixel(x, y);
			//	std::cout << cam_ray_direction.getY() << std::endl;
			}

		}
		SDL_RenderPresent(engine.getRenderer());
	
	engine.mainLoop();
	return 0;
}
