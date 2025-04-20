#include <stdio.h>
#include <ctype.h>

int main()
{
	char string[] = "Nifty TEXT! 123\n";
	int ch;
	int i = 0;
	while ((ch = string[i]) != '\0')
	{
		if (isupper(ch))
			putchar(tolower(ch));
		else if (islower(ch))
			putchar(toupper(ch));
		else
			putchar(ch);
		i++;
	}
	putchar('\n');
	return (0);
}
