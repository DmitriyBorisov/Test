// Test programm
#include <stdio.h>
#include "hello.h"
#define MAX 30

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
		if(fgets(name, MAX, stdin) != NULL)
			printf("Hello %s!\n", name);
		else
			puts("Error! Can't read your name");
	}
	return 0;
}
