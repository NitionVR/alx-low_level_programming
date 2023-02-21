#include <stdio.h>

/**
 * main - program that prints all possible different
 * combinations of two digits
 * Return: 0 (Success)
*/

int main(void)
{
	int k;
	int s;

	for (k = 48; k <= 56; k++)
	{
		for (s = 49; s <= 57; s++)
		{
			putchar(k);
			putchar(s);
			if (k != 56 || s != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
