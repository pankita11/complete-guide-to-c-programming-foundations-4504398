#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* main program */
int main()
{
	// variable declaration
	char input[20];
	char quitmask[] = "QUIT";

	while (1)
	{
		int i = 0;
		printf("Enter command: ");
		fgets(input, sizeof(input), stdin);
		while (input[i] != '\0')
		{
			if (input[i] == '\n')
			{
				input[i] = '\0';
			}
			input[i] = toupper(input[i]);
			i++;
		}
		if (strcmp(input, quitmask) == 0)
		{
			printf("Quitting\n");
			break;
		}
		else
			printf("Processing command: %s\n", input);
	}
	return 0;
}
