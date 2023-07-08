#include "main.h"

/**
 * _isdigit - if 0 to 9 return 1, els return 0
 *
 * @c: this is the entry
 *
 * Return: 0
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
