#include  "main.h"

/**
 * _strspn - fUMCTION AS DESCRIBED IN MAIN.
 * @s:input
 * @accept: input
 * Return: Always 0(success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s) /* checks if char pointed to is nun-null */
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++; /* length variable */
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
