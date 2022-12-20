#include "main.h"
#include <stdio.h>

/**
 * main - copies string pointed to by src
 * Return: string
 */
int main(void)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(scr + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
