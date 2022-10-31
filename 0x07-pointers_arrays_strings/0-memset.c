#include "main.h"

/**
 *_memset-fills the first n bytes of the memory area
 *@s: A pointer to the memory area to be filled
 *@c: The character to fill the memory area with
 *@n: The number of bytes to be filled
 *Description _memset: Over there
 *
 *Return: A pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)

{
	char *ptr = s;

	while (n-- > 0)
	*ptr++ = b;

	return (s);
}

