#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_file(const char *f)
{
	FILE *fd;
	fd = fopen(f, "w");
	if (fd == NULL)
	{
		printf("File write operation failed\n");
		return;
	}
	fputs("Ankita Patil", fd); // fwrite
	printf("File has been created\n");
	fclose(fd);
}

void read_file(const char *f)
{
	char name[32];
	FILE *fd;
	fd = fopen(f, "r");
	if (fd == NULL)
	{
		printf("File read operation failed\n");
		return;
	}
	// fread(name, 32, 32, fd);
	fgets(name, 32, fd); // fread
	printf("File contents are: %s\n", name);
	fclose(fd);
}

void delete_file(const char *f)
{
	sleep(5);
	 int r = unlink(f);
	 if(r == 0)
		 printf("File %s was deleted \n", f);
		else
			printf("File deletion operation failed \n");
}

int main()
{
	const char filename[] = "stuff.dat";

	create_file(filename);
	read_file(filename);
	delete_file(filename);

	return 0;
}
