#include <stdio.h>

void line(int num, char ch)
{
	int i = 0;
	while (i < num)
	{
		putchar(ch);
		i++;
	}
	putchar('\n');
}

int main()
{
	puts("Report on Extraterrestrial Activity");
	line(5, '#');

	return (0);
}
