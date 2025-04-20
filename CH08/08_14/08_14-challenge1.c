#include <stdio.h>
#include <stdlib.h>

// write the get_input() function here
char *get_input(size_t size)
{
	char *returnString = (char *)malloc(sizeof(char) * size);
	if (returnString == NULL)
	{
		printf("Mem allocation failed");
		exit(1);
	}
	// scanf("%s", returnString);
	fgets(returnString, size, stdin); // This is so you can specify the amount of bytes
	int i = 0;
	while (i < size && (*(returnString + i) != '\0'))
	{
		if (*(returnString + i) == '\n')
		{
			*(returnString + i) = '\0';
			break;
		}
		i++;
	}
	return returnString;
}

int main()
{
	char *your_name, *your_city;

	printf("Your name: ");
	your_name = get_input(32);
	printf("Your city: ");
	your_city = get_input(32);

	printf("%s lives in %s.\n", your_name, your_city);
	free(your_name);
	free(your_city);

	return 0;
}
