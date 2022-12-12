#include <stdio.h>
/**
 * main - Entry of the code
 * Description: 'printing size'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
        int intType;
        long int longInt;
        long long int llint;
        float floats;

    	printf("Size of char: %zu byte(s)\n", sizeof(charType));
    	printf("Size of int: %zu byte(s)\n", sizeof(intType));
    	printf("Size of long int: %zu byte(s)\n", sizeof(longInt));
    	printf("Size of long long int: %zu byte(s)\n", sizeof(llint));
    	printf("Size of float: %zu byte(s)\n", sizeof(floats));
    	return (0);
}	
