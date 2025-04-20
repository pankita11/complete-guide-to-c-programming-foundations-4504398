#include <stdio.h>

int main()
{
	int a, b;

	printf("Enter two values, separated by a space: ");
	scanf("%d", &a);
	scanf("%d", &b);

	printf("Sum of %d and %d is: %d \n", a, b, a + b);
	printf("Diff of %d and %d is: %d \n", a, b, a - b);
	printf("Muliplication of %d and %d is: %d \n", a, b, a * b);
	printf("Division of %d and %d is: %d \n", a, b, a / b);
	printf("Modulus of %d and %d is: %d \n", a, b, a % b);
	printf("Bit shift right of %d with %d is: %d \n", a, b, a >> b);
	printf("Bit shift left of %d with %d is: %d \n", a, b, a << b);

	return 0;
}
