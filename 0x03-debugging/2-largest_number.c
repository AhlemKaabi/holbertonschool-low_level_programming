#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a > b && a > c)
{
largest = a;
printf("%d is the largest number\n", largest);
}
else if (c > a && c > b)
{
largest = c;
printf("%d is the largest number\n", largest);
}
else
{
largest = b;
printf("%d is the largest number\n", largest);
}

return (largest);
}
