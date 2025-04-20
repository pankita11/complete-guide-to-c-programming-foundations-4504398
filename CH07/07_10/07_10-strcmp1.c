#include <stdio.h>
#include <string.h>

int main()
{
	char password[10] = "interview";
	char input[10];

	printf("Password please: ");
	fgets(input, sizeof(input), stdin);

	if (strcmp(password, input) == 0)
	{
		printf("Entry granted\n");
	}
	else
		printf("Entry denied\n");

	return (0);
}
