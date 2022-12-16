#include "main.h"
/**
 * print_most_numbers - print number from 0 to 9
 * @c print_most_numbers
 * Return: 0
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		if (ch != 2 && ch != 4)
			_putchar(ch);
	}
	_putchar('\n');
}
