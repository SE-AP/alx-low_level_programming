#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create an array of size 'size' and assign character 'c'
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	    return NULL;

    char *str = malloc(sizeof(char) * size);

	if (str == NULL) {
	return NULL;
	}

	for (unsigned int i = 0; i < size; i++) {
		str[i] = c;
	}

	return str;
}

int main() {
	unsigned int array_size = 10;
	char fill_character = 'X';

	char *result_array = create_array(array_size, fill_character);

	if (result_array == NULL) {
		printf("Memory allocation failed.\n");
	return 1; 
	}

	for (unsigned int i = 0; i < array_size; i++) {
		printf("%c ", result_array[i]);
    }
	printf("\n");

	free(result_array);
   
	return 0;
}
