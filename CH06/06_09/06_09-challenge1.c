#include <stdio.h>
#include <string.h>

struct date
{
	int date;
	int month;
	int year;
};

struct Person
{
	char name[32];
	struct date birthday;
	float height;
};

int main()
{
	struct Person myself = {"Ankita", {11, 11, 1992}, 0.114};
	// strcpy(myself.name, "Ankita");
	// myself.birthday.date = 11;
	// myself.birthday.month = 11;
	// myself.birthday.year = 1992;
	// myself.height = 0.114;

	printf("%s was born on %d/%d/%d and their height is %f\n", myself.name, myself.birthday.date,
				 myself.birthday.month, myself.birthday.year, myself.height);
	return 0;
}
