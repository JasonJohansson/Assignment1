//Jason Johansson
// SimpleHammer Weapon

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

#include <string>
#include "Weapon.h"

class SimpleHammer : public Weapon {
public:
	SimpleHammer() : Weapon("Simple Hammer", 25) {}
	virtual ~SimpleHammer() {};
	virtual double hit(double armor);
};

#endif 
