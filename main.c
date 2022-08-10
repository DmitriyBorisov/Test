/*
 *
 * Test programm
 *
 */
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "hello.h"
#define MAX 30
#define NAME_ARG 1

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	//	TODO: Do something with this magic number
	if (argc == 2) 
	{
		say_hello(argv[NAME_ARG]);	
	}
	else
	{
		char name[MAX];
		puts("Input your name: ");
		if(fgets(name, MAX, stdin) != NULL)
		{
			int ln = strlen(name) - 1;
			if (*name && name[ln] == '\n') name[ln] = '\0';
			say_hello(name);
		}
		else
			puts("Error! Can't read your name");
	}
	return 0;
}
