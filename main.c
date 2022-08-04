#include <stdio.h>
#define MAX 20

int main(int argc, char *argv[])
{
	if (argc == 2) 
	{
		printf("Hello %s!\n", argv[1]);
	}
	else
	{
		char name[MAX];
		puts("Input your name: ");
		gets(name);
		printf("Hello %s!\n", name);
	}
	return 0;
}
