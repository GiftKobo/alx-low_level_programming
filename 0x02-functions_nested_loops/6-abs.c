#include "main.h"
/**
 * _abs - Computes the obsolute value
 * of an integer.
 *
 * @i: imput number as an integer.
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
