#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: 0 (Success)
*/
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
