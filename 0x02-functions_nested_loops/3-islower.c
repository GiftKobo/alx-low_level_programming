#include "main.h"
/**
 * _islower - Shows 1 if the imput is a
 * lowercase charecter. Another cases, shows
 * 0
 * \@c: The charecter in ASCII code
 *
 * Return: 1 for lower case charecter. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
