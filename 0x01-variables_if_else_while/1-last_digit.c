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
	int n;
	int lastDgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDgt = n % 10;
	if(lastDgt > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDgt);
	}
	else if (lastDgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDgt);
	}
	else if (lastDgt < 6 && lastDgt!=0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDgt);

	}
	return (0);
}
