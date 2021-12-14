#include <stdio.h>
#include "agent.h"

int main(int argc, char *argv[]) {
	
	struct agent a1 = newagent(5,5);
	west(&a1);
	
	struct agent a2 = newagent(1,3);
	north(&a2);
	printf("%d %d", a2.x, a2.y);
	return 0;
}
