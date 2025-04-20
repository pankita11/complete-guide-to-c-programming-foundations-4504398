#include <stdio.h>
#include <time.h>

int main()
{
	time_t now;
	time(&now);

	struct tm *timestamp;
	timestamp = localtime(&now);
	const char* weekday[] = {"Sun", "Mon", "Tue", "Wed", "Thurs", "Fri", "Sat"};

	printf("The time is: %d:%d:%d \n",
				 timestamp->tm_hour, timestamp->tm_min, timestamp->tm_sec);
	printf("Its %s\n", weekday[timestamp->tm_wday]);
	printf("The year is: %d \n", timestamp->tm_year + 1900);

	return (0);
}
