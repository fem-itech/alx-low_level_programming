#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry of the code
 *
 * Description: 'the program to print out a-z'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int ch = "a";

        while(ch <= "z" )
                        {
                putchar(ch);
                ch ++;
        }
        putchar("\n");
        return(0);
