#include "main.h"

/**
 * _strcat - concatenates the string pointed to
 * @dest: A pointer to the string to be concatenated upon
 * @src: The source string to be appended to @dest
 * Return: A pointer to the destination string@dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_lon = 0;

	while (dest[index++])
		dest_lon++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
