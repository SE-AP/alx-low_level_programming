#include "main.h"
#include <stdlib.h>

char *_strcpy(char *dest, char *src);

/** 
 * _strlen - Calculate the length of a string
 * @s: Input string
 * Return: Length of the string
 */
int _strlen(char *s)
{
    int len = 0;
    while (*s != '\0')
    {
        len++;
        s++;
    }
    return (len);
}

/**
 * _strcpy - Copy a string from source to destination
 * @dest: Destination string
 * @src: Source string
 * Return: Pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
    int len = _strlen(src);
    int i;

    for (i = 0; i <= len; i++)
    {
        dest[i] = src[i];
    }

    return (dest);
}

