#include "agent.h"
#include <math.h>

struct agent newagent(int x, int y) 
{
	struct agent nowy;
	nowy.x = x;
	nowy.y = y;
	return nowy;
}

void north(struct agent *a) 
{
	a->y = a->y - 1;
}

void south(struct agent *a) 
{
	a->y = a->y + 1;
}

void west(struct agent *a) 
{
	a->x = a->x - 1;
}

void east(struct agent *a) 
{
	a->x = a->x + 1;
}

double distance(struct agent a1, struct agent a2)
{
	double dist = (a1.x - a2.x) * (a1.x - a2.x) + (a1.y - a2.y) * (a1.y - a2.y);
	return sqrt(dist);
}
