#include "main.h"
/**
 * main - Entry of the code
 * Description: 'the program to print _putchar'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alx[] = "_putchar";
	int i = 0;

	while (alx[i] != '\0')
	{
		_putchar(alx[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
