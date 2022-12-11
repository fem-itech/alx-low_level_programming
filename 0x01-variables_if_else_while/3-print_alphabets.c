#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry of the code
 * Description: 'the program to print out a-z in lower and uppercase'
 * Return: Always 0 (Success)
 */
int main(void)
{	
	char i;
	char S;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (S = 'A'; S <= 'Z'; S++)
	{
		putchar(S);
	}
	putchar('\n');
	return (0);
}
