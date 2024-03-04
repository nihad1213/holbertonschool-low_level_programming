#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * src to memory area dest
 * @dest: destiantion
 * @src: source
 * @n: bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*typecast src and dest addresss to (char *) */
	char typeCastSrc = char *src;
	char typeCastDest = char *dest;
	int i = 0;

	for (i = 0; i < n; i++)
	{
		typeCastDest = typeCastSrc[i];
	}
	
	return (dest);
}
