#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n) {
	char *result = (char *)malloc(n);
	if (result == NULL) {
	return (NULL);
	}

	for (unsigned int a = 0; a < n; a++) {
	result[a] = b;
	}

	return (result);
}

