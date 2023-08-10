#include "main.h"
#include <stdlib.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;
	char *new_str;
	char *new_dest;

	while (dest[dest_len] != '\0')
	dest_len++;

	while (src[src_len] != '\0')
	src_len++;

	new_str = (char *)malloc((dest_len + src_len + 1) * sizeof(char));
	if (new_str == NULL)
	return (NULL);

	new_dest = new_str;
	while (*dest != '\0')
	*new_dest++ = *dest++;

	while (*src != '\0')
	*new_dest++ = *src++;
	*new_dest = '\0';
	return (new_str);
}
