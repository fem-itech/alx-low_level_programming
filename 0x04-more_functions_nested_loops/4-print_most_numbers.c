#include "main.h"
/**
 * print_most_numbers - print number from 0 to 9
 * (neither 2 nor 4).
 * Return: no return
 */
void print_most_numbers(void)
{
	int i = 0;

	for (i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_printchar (x + '0');
		}
	}
	_putchar('\n');
}
