#include <stdio.h>

int main()
{
	int alpha;
	int *ptr;

	alpha = 99;
	ptr = &alpha;
	printf("The address of variable alpha is %p\n", &alpha);
	printf("The value stored in pointer ptr is %p\n", ptr);
	printf("The value stored in dereference %d\n", *ptr);
	printf("The value stored in dereference %p\n", *ptr);

	return (0);
}
