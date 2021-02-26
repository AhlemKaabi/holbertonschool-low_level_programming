#include "holberton.h"
/**
* test_sqrt - function.
*@i: our test
*@x: the number
*Return: the sqrt
*/
int test_sqrt(int x, int i)
{
	if (x == 1)
		return (1);
	if (i == x && ((i * i) % 2 != 0))
		return (-1);
	if (i * i == x)
		return (i);
	return (test_sqrt(x, i + 1));
}
/**
* _sqrt_recursion - function that returns the natural square
* root of a number.
*@n: the number
*Return: is it a primenumber or not.
*/
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	return (test_sqrt(n, 0));
}
