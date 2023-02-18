#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * except q and e
 * Return: 0 (Success)
*/
int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		if ((character != 'q') && (character != 'e'))
			putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
