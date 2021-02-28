#include "holberton.h"
/**
*_isalpha - checkes for alphabetic character
* Return: - success or fail
*@c: parameter
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
