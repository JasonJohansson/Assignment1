//Jason Johansson
//Dagger.cpp
#include "Dagger.h"
#include <cstdlib>

double Dagger::hit(double armor) {
	double dmg = hitPoints - (armor-((rand() % (static_cast<int>(armor)/4)) + (armor*0.75)));	//method referenced from
	if (dmg < 0)								//http://www.math.uaa.alaska.edu/~afkjm/csce211/fall2018/handouts/RandomFunctions.pdf
		return 0;
	return dmg;
}