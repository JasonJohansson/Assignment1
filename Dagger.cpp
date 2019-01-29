//Jason Johansson
//Dagger.cpp
#include "Dagger.h"
#include <cstdlib>
#include <ctime>

double Dagger::hit(double armor) {
	srand(time(NULL));
	double dmg = hitPoints - (armor-((rand() % (static_cast<int>(armor)/4)) + (armor*0.75)));
	if (dmg < 0)
		return 0;
	return dmg;
}