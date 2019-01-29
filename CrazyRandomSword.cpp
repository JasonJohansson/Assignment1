//Jason Johansson
//CrazyRandomSword.cpp

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
	double dmg = hitPoints - (rand()%(static_cast<int>(armor/3))) + 2;	//method referenced from
																		//http://www.math.uaa.alaska.edu/~afkjm/csce211/fall2018/handouts/RandomFunctions.pdf
	if (dmg < 0)
		return 0;
	return dmg;
}