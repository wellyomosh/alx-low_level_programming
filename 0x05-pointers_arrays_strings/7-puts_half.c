#include "main.h"

/**
 *puts_half - prints every other character of a string
 *@str: A pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void puts_half(char *str)

{
	int i = 0;
	int half;

	while (str[i] != '\0')
	{
		i++;
	}

	half = (i + 1) / 2;

	for (i = half; str[i]; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
