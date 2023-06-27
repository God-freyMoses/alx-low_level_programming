#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int length;
	int i;
	char *s;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	for (i=0; i <length; i++)
	{
		if (i%2==0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
