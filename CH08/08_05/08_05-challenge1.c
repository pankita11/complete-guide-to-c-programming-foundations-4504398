#include <stdio.h>

int main()
{
	char title[] = "Pointers don't intimidate me!\n";
	char *ptr;
	ptr = title;
	// ptr = &title[0];
	int i = 0;
	while (*(ptr + i) != '\0')
	{
		putchar(*(ptr + i));
		i++; // this is better than directly doing ptr++;
	}
	return 0;
}
