#include "main.h"
/**
* print_alphabet_x10 - function that prints 10 times the alphabet,
* in lowercase, followed by a new line
*/

void print_alphabet_x10(void)
{
	char character;
	int i = 0;

	while (i < 0)
	{
		character = 'a';
		while (character <= 'z')
		{
			_putchar(character);
			character++;
		}
		i++;
		_putchar('\n');
	}
}
