#include <stdio.h>

int main()
{
	const char filename[] = "presidents.dat";
	struct person
	{
		char name[32];
		int inauguration;
		int age;
	} president;
	int x;
	FILE *fp;

	/* open the file */
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("Unable to open %s\n", filename);
		return (1);
	}

	/* read records from back to front */
	struct person presidentsRead;
	for (int i = -1; i > -11; i--)
	{
		fseek(fp, sizeof(struct person) * i, SEEK_END); // Didnt understand
		fread(&presidentsRead, sizeof(struct person), 1, fp);
		printf("President %s of age %d\n", presidentsRead.name, presidentsRead.age);
	}

	/* clean-up */
	fclose(fp);
	return (0);
}
