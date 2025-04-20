#include <stdio.h>

int main()
{
	const char filename[] = "hello.txt";
	FILE *fp;
	char name[32];

	fp = fopen(filename, "w");
	if (fp == NULL)
	{
		printf("File open for read failed\n");
		return -1;
	}

	printf("Enter your name please: ");
	scanf("%s", name);
	fprintf(fp, "%s has written to this file\n", name);
	fclose(fp);

	fp = fopen(filename, "r");
	if(fp == NULL){
		printf("File Open for read failed");
		return -1;
	}
	char input[32];
	fgets(input, 32, fp);
	fclose(fp);

	printf("File contents are: %s \n", input);
	return 0;
}
