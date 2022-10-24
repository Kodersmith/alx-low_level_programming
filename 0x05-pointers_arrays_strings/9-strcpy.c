#include "main.h"

/**
 *_strcpy-copy the string to by
 *@dest: destination
 *@src: source
 *Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
{
	dest[index] = src[index];
}
	dest[index] = '\0';

	return (dest);
}
