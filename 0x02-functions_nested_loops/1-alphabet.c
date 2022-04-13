#include "main.h"

/**
 * print_alphabet - rrints the alphabet in lowercase
 * Description: Prints alphabets in lower case
 * Return: (0)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
