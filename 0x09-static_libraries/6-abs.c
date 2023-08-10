#include <stdlib.h>

int _abs(int n);

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num = -42;
    int result = _abs(num);
    
    return (0);
}

/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
    if (n >= 0)
    {
        return (n);
    }
    return (-n);
}

