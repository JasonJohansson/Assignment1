//Jason Johansson
//SimpleHammer.cpp

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
	double dmg;
	if (armor < 30)
		dmg = hitPoints;
	else
		dmg = hitPoints - armor;
	if (dmg < 0)
		return 0;
	return dmg;
}