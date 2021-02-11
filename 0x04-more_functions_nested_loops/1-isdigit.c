#include "holberton.h"
/**
* _isdigit - funtion that checks digits
* @c: parameter
* Return: success or fail
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}
