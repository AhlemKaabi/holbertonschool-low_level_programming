#include "holberton.h"
/**
* test_prime - function.
*@i: the number
*@n: numb
*Return: int
*/
int test_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (test_prime(n, i - 1));
}
/**
* is_prime_number - function test prime number
*@n: the number
*Return: is it a primenumber or not.
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (test_prime(n, n / 2));
}

