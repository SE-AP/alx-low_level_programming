#include <stddef.h>
#include <stdlib.h> 

char *_strncat(char *dest, char *src, int n) 
{
    size_t dest_len = 0;
    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    size_t i = 0;
    while (i < n && src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';

    return (dest);
}
