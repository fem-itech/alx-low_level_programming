#include "main.h"
#include <stdio.h>

/**
 * _strcpy - opies the string pointed to
 * @dest: destination
 * @src: source
 * Return: the pointer
 */
char *_strcpy(char *dest, char *src)
{
int count = 0;

while (count >= 0)
{
*(dest + count) = *(src + count);
if (*(src + count) == '\0')
break;
count++;
}
return (dest);
}
