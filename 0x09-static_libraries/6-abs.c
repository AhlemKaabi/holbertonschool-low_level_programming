#include "holberton.h"
/**
* _abs - prints the sign of a number
* @n: number
* Return: success or fail
*/
int _abs(int n)
{
	if (n >= 0)
		n = n * 1;
	else
		n = n * (-1);
	return (n);
}
