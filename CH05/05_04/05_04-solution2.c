#include <stdio.h>

void line(void);

void line()
{
	int i = 0;
	while (i < 40)
	{
		putchar('-');
		i++;
	}
	putchar('\n');
}
int main()
{
	puts("How to Fight Off a Robot Attack");
	line();
	puts("A Survival Guide for the 21st Century");
	line();

	return (0);
}