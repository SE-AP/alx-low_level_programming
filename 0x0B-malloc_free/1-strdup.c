#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
		
 * _strdup - duplicate to new memory space location
		
 * @str: char
		
 * Return: 0
		
 */

char *_strdup(char *str)
{
	char *duplicate; 
	int length, index = 0;

	if (str == NULL)
	return NULL;

	length = 0;
	while (str[length] != '\0')
	length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	return NULL;
	
    for (index = 0; str[index]; index++)
	    duplicate[index] = str[index];

    return duplicate;
}

