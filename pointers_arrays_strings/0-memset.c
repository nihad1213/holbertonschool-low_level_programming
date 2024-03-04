#include "main.h"

/**
 * _memset - fills the first n bytes of the memory are
 * pointed to by s with the constant byte b
 * @b: constant byte
 * @s: start of memory area
 * @n: number of bytes
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int n = 0;
	int i = 0;

	while (i < n)
	{
		*s++ = b;
		i++;
	}

	return (s);

}
