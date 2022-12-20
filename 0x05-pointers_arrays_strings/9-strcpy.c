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
	in count = 0;

	while (count >= 0)
	{
		*(dest + count} = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
