#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 2) 
	{
		printf("Hello %s!", argv[2]);
	}
	else
	{
		printf("Hello world!\n");
	}
	return 0;
}
