#include <stdio.h>

int filecopy(char *org, char *dup)
{
	FILE *o;
	FILE *d;

	o = fopen(org, "r");
	d = fopen(dup, "w");

	int ch;
	while (1)
	{
		ch = fgetc(o);
		if (ch == EOF)
			break;
		fputc(ch, d);
	}

	return 0;
}

int main()
{
	char original[] = "beta.txt";
	char duplicate[] = "betacopy.txt";
	int r;

	r = filecopy(original, duplicate);
	if (r == -1)
		puts("Unable to copy files");
	else
		printf("%s copied to %s\n", original, duplicate);

	return (0);
}
