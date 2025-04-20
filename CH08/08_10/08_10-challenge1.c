#include <stdio.h>
#include <stdlib.h>

struct alphabets
{
	int index;
	char alpha;
};

int main()
{
	struct alphabets *alphabetMap[26];
	for (int i = 0; i < 26; i++)
	{
		alphabetMap[i] = malloc(sizeof(struct alphabets));
		if(alphabetMap[i] == NULL){
			printf("Mem allocation failed for %d\n", i);
			exit(0);
		}
		alphabetMap[i]->alpha = 'A' + i;
		alphabetMap[i]->index = i;
	}

	for (int i = 0; i < 26; i++)
	{
		printf("Alphabet: %c \t", alphabetMap[i]->alpha);
		printf("Alphabetidx: %d \n", alphabetMap[i]->index);
	}

	for (int i = 0; i < 26; i++)
		free(alphabetMap[i]);
	printf("All Memory freed\n");
	return 0;
}
