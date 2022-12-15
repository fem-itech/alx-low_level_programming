#include "main.h"
/**
 * print_most_numbers - print number from 0 to 9
 * (neither 2 nor 4).
 * Return: no return
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; ch++)
	{
		if (i != 2 && i != 4)
			_putchar(ch);
	}
	_putchar('\n');
}
