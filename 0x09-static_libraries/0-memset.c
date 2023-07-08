#include "main.h"

/**
 * _memset - This is my funx, copy the number to char s
 * @s: this is my entry and return
 * @b: this is the char to b copied
 * @n: this is the number of bytes
 *
 * Return: this is the result and Reeturn S.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
