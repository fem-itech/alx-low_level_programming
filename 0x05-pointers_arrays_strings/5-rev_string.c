#include "main.h"

/**
 * rev_string - reverse a string
 * @c: input
 * Return: string in reverse
 */
void rev_string(char *c)
{
	char rv = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c}
		s[c} = rv;
	}
}
