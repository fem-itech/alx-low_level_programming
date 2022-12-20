#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string pointed to by src
 * @dest: destination
 * @src: source
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(des + i) = *(src + i);
	}

	*(dest + i) = '\0';
	return (dest);
}
