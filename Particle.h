#ifndef PARTICLE_CLASS_H
#define PARTICLE_CLASS_H

#include"config.h"

class Particle {
	public:
		float position, velocity, aceleration, lifespan, mass;
		unsigned int life, color;

		Particle(float position, float mass, float velocity, float aceleration, float lifespan, unsigned int life, unsigned int color);

		void CreateParticle();
		void DeleteParticle();
		void UpdateParticle();
		void InfoParticle();
};

#endif