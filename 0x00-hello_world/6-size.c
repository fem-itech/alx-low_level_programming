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

    // sizeof evaluates the size of a variable
    printf("Size of char: %zu byte\n", sizeof(charType));
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of long int: %zu bytes\n", sizeof(longInt));
    printf("Size of long long int: %zu bytes\n", sizeof(llint));
    printf("Size of float: %zu bytes\n", sizeof(floats));
    return 0;
}	
