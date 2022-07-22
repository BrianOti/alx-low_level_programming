#include "main.h"

/**
 * _memcpy - copies one to another
 * @dest: char dextination
 * @src: char source
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
