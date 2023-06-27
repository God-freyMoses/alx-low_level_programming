#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int i;
	int length;
	int n;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	n = (length / 2);
	if ((length % 2 == 1)
		n = ((length + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
	_putchar(str[i]);

	_putchar('\n');
}
