#include "main.h"

/**
 * _memset - a function that fills memory with a consttant byte
 * @s: points to address of memory to fill
 * @b: constant byte
 * @n: number of bytes to change
 * Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
