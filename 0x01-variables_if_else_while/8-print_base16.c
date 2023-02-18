#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16
 * in lowercase, followed by a new line
 * Return: 0 (Success)
*/
int main(void)
{
	int n;
	char character;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (character = 'a'; character <= 'f'; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
