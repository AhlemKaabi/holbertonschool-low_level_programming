#include "holberton.h"
/**
* _islower - function that checks for lowrcase
* Return: success or fail
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return 1;
else
return 0;
}
