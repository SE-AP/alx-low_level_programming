#include <stddef.h>
#include <stdlib.h>

int _strcmp(char *s1, char *s2) {
    if (!s1 || !s2)
        return (0);

    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

char *_strcpy(char *dest, const char *src) {
    if (!dest || !src)
        return (NULL);

    char *original_dest = dest;

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
    return (original_dest);
}

size_t _strlen(const char *s) {
    if (!s)
        return (0);

    size_t len = 0;
    while (s[len] != '\0')
        len++;

    return (len);
}

void *_malloc(size_t size) {
    void *ptr = malloc(size);
    return (ptr);
}

void _free(void *ptr) {
    free(ptr);
}

