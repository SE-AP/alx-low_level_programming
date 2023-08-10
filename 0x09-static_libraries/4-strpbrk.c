#include <stdlib.h>

/**
 * _strpbrk - Finds the first occurrence of a character from `accept` in `s`
 * @s: The input string to search
 * @accept: The characters to search for
 * Return: Pointer to the first occurrence in `s`, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
    int k;

    while (*s)
    {
        for (k = 0; accept[k]; k++)
        {
            if (*s == accept[k])
                return (s);
        }
        s++;
    }

    return (NULL);
}

