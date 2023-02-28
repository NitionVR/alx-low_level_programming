#include "main.h"
/**
 * _puts - a function prints a string, followed by
 * s new line, to stdout.
 * @str: string 
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
