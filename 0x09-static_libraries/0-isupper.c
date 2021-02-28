#include "holberton.h"
/**
* _isupper - funtion that checks for uppercase character
* @c: parameter
* Return: success or fail
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}
