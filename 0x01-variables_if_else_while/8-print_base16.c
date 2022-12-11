#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry of the code
 * Description: 'print number in base 16 inlocase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
