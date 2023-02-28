#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string
 * Return: print output
*/
void puts2(char *str)
{
	int i = 0;
	int k = 0;
	char *s = str;
	int q;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	k = i - 1;

	for (q = 0; q <= k; q++)
	{
if:wq
	  : (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}

