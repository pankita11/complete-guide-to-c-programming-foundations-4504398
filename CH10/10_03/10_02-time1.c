#include <stdio.h>
#include <time.h>

int main()
{
	time_t timenow;
	printf("The time now is: %s \n", ctime(&(*(time(&timenow)))));

	return (0);
}
