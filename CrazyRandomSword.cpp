#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
	srand(time(NULL));
	double dmg = hitPoints - (rand()%(static_cast<int>(armor/3))) + 2;
	if (dmg < 0)
		return 0;
	return dmg;
}