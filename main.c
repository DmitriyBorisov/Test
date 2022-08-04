// Test programm
#include <stdio.h>
#include "hello.h"
#define MAX 30

int main(int argc, char *argv[])
{
	if (argc == 2) 
	{
		say_hello(argv[1]);	
	}
	else
	{
		char name[MAX];
		puts("Input your name: ");
		if(fgets(name, MAX, stdin) != NULL)
			say_hello(name);
		else
			puts("Error! Can't read your name");
	}
	return 0;
}
