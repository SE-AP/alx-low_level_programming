#include "main.h"

/**
 * _isupper - checks if a character is an uppercase letter
 * @c: char to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z') ? 1 : 0;
}
