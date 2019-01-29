//Jason Johansson
//Dagger.h
//Dagger hits for 10dmg and ignores 75-100% of armor

#ifndef DAGGER_H
#define DAGGER_H

#include <string>
#include "Weapon.h"

class Dagger : public Weapon {
public: 
	Dagger() : Weapon("Dagger", 10.0) {}
	virtual ~Dagger() {};
	virtual double hit(double armor);
};

#endif
