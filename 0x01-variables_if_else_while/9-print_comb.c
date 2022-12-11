#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry of the code
 * Description: 'the program to print out last digit of n'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
