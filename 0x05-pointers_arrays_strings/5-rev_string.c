#include "main.h"
/**
 * rev_string - prints a reverse string
 *@s: A pointer to an int that will be changed
 *
 *Return: void
 */

void rev_string(char *s)
{
	int max, half;
	char start, end;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	max = i - 1;
	half = max / 2;

	while (half >= 0)
	{
		start = s[max - half];
		end = s[half];
		s[half] = start;
		s[max - half] = end;
		half--;
	}
}
