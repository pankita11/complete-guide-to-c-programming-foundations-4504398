#include <stdio.h>

int main()
{
	int arr[5] = {12, 13, 40, 34, 75};

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("I know someone who is %d years old\n ", arr[i]);
	}
	return 0;
}
