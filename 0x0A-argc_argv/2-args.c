#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *main-print the name of the program
 *@argc: count argument
 *@argv: Arguments
 *Return: Success
 */

int main(int argc, char *argv[])
{
	while (argc--)
	printf("%s\n", argv++);

	exit(EXIT_SUCCESS);
}

