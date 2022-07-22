#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - Check if paramter c represents an digit.
 * @c: Int representing an ascii character
 * Return: Return 1 if it is a digit otherwise return 0.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
