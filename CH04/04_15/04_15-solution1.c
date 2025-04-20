#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int main()
{
	int done;
	char ch;

	/* main program loop */
	done = FALSE;
	while (!done)
	{
		printf("Enter Command: ");
		ch = getchar();
		switch (ch)
		{
		case 'R':
		case 'r':
			puts("Move right");
			break;
		case 'L':
		case 'l':
			puts("Move left");
			break;
		case 'Q':
		case 'q':
			puts("Alright goodbye!");
			done = TRUE;
			break;
		default:
			puts("Invalid input. please input R or L");
			break;
		}
		while ((ch = getchar()) != '\n')
		{
		};
	}

	return 0;
}
