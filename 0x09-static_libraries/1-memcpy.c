 #include "main.h"

/**
 * _memcpy - this is my funx, copy src to dest
 * @dest: this is my result
 * @src: this is my string
 * @n: this wher my number bytes are copied to.
 *
 * Return: This is my string copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	char *pDst = dest;
	char const *pSrc = src;

	for (a = 0; a < n; a++)
	{
		*pDst++ = *pSrc++;
	}
	return (dest);
}
