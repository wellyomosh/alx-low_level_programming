#include "main.h"

/**
 * _abs - gives the absolute integer value
 * @n: input number as integer
 * Return: absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
