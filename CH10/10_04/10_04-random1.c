#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	time_t now;

	for (int i = 0; i < 10; i++)
	{
		printf("time now: %d\n ", (int)time(&now));
		srand((int)time(&now));
		printf("Rand number: %d \n", (rand() % 100) + 1);
		sleep(1);
	}
	return (0);
}
