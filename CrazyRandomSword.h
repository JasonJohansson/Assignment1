//Jason Johansson
//CrazyRandomSword.h

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

#include <string>
#include <cstdlib>
#include "Weapon.h"

class CrazyRandomSword : public Weapon {
public:
	CrazyRandomSword() : Weapon("CrazyRandom Sword", rand() % 93 + 7){}
	virtual ~CrazyRandomSword() {};
	virtual double hit(double armor);
};

#endif // !CRAZYRANDOMSWORD_H
