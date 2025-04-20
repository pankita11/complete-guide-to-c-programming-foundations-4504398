#include <stdio.h>

int main()
{
	const char filename[] = "09_01-reading2.c";
	FILE *fp;
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("file did not open\n");
		return (1);
	}
	else
	{
		// read from file
		int ch;
		while (1)
		{
			ch = fgetc(fp);
			if (ch == EOF)
				break;
			putchar(ch);
		}
		fclose(fp);
		printf("file closed\n");
	}

	return 0;
}
