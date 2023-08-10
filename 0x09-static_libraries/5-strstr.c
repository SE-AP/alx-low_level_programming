#include "main.h"
#include <stddef.h> 

/**
 * _strstr - Find the first occurrence of a substring in a string
 * @haystack: The string to search in
 * @needle: The substring to search for
 * Return: Pointer to the first occurrence of `needle` in `haystack`,
 * or NULL if `needle` is not found
 */
char *_strstr(char *haystack, char *needle)
{
    if (!(*needle))
        return (haystack);

    while (*haystack)
    {
        char *h = haystack;
        char *n = needle;

        while (*h == *n && *n)
        {
            h++;
            n++;
        }

        if (*n == '\0')
            return (haystack);

        haystack++;
    }

    return (NULL);
}

