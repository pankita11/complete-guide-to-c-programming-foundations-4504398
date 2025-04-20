#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 5

int compare(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

int main()
{
	// seed the randomizer
	srand((unsigned)time(NULL));

	// allocate storage
	// int list[MAX_SIZE][MAX_SIZE];
	int *list = (int *)malloc(sizeof(int) * MAX_SIZE * MAX_SIZE);
	if (list == NULL)
	{
		printf("Memory allocation failed\n");
		return -1;
	}

	// populate the grid with random values, 0 through 99
	// for (int i = 0; i < MAX_SIZE; i++)
	// {
	// 	for (int j = 0; j < MAX_SIZE; j++)
	// 		*list[i][j] = rand() % 99;
	// }

	for (int i = 0; i < (MAX_SIZE * MAX_SIZE); i++)
	{
		*(list + i) = rand() % 100;
	}

	// output the grid
	// 	for (int i = 0; i < MAX_SIZE; i++)
	// 	{
	// 		for (int j = 0; j < MAX_SIZE; j++)
	// 		{
	// 			printf("%d ", list[i][j]);
	// 		}
	// 		printf("\n");
	// 	}
	// printf("\n");

	for (int i = 0; i < (MAX_SIZE); i++)
	{
		for (int j = 0; j < (MAX_SIZE); j++)
		{
			printf("%2d ", *(list + MAX_SIZE * i + j));
		}
		printf("\n");
	}

	printf("\n");

	// quicksort the grid
	qsort(list, MAX_SIZE * MAX_SIZE, sizeof(int), compare);

	// output the grid
	// for (int i = 0; i < MAX_SIZE; i++)
	// {
	// 	for (int j = 0; j < MAX_SIZE; j++)
	// 	{
	// 		printf("%d ", list[j][i]);
	// 	}
	// 	printf("\n");
	// }

	for (int i = 0; i < (MAX_SIZE); i++)
	{
		for (int j = 0; j < (MAX_SIZE); j++)
		{
			printf("%2d ", *(list + MAX_SIZE * j + i));
		}
		printf("\n");
	}
	return 0;
}
