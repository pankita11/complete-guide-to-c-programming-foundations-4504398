#include <stdio.h>
#include <stdlib.h>

int main()
{
	const float ratio = 3.0 / 4.0;
	char a;
	int b;
	float c;

	a = 'B';
	b = 2;
	c = 2.2;

	printf("the value of variable a is: '%c' \n", a);
	printf("the value of variable b is: %d \n", b);
	printf("the value of variable c is: %.2f \n", c);
	printf("the value of constant raio is: %.2f \n", ratio);

	return 0;
}
