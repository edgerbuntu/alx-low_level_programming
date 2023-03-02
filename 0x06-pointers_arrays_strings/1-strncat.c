#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: receive a string
 * @src : send a string
 * @n: bytes from src
 *
 * Return: Always dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, i;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[a + i] = src[i];
	}
	dest[a + i] = '\0';
	return (dest);
}
