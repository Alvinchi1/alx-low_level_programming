 #include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character
 * return: the poiter to the first occurence of he character c
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
