#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry of the code
 * Description: 'code to print out the single digit of base 10 starting from  0'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
