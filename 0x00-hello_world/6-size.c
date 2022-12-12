#include <stdio.h>
/**
 * main - Entry of the code
 * Description: 'printing size'
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of char: %zu byte(s)\n", sizeof(charType));
    printf("Size of int: %zu byte(s)\n", sizeof(intType));
    printf("Size of long int: %zu byte(s)\n", sizeof(longInt));
    printf("Size of long long int: %zu byte(s)\n", sizeof(llint));
    printf("Size of float: %zu byte(s)\n", sizeof(floats));
    return (0);
}	
