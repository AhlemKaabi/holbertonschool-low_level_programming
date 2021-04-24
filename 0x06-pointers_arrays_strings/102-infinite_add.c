/** the code is not terminated **/
#include "holberton.h"
/**
* rev_string - function that reverse a string.
* @s: parameter pointer
*/
void rev_string(char *s)
{
	int i, j;
	char tmp;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	for (j = 0; j <= (i - 1) / 2; j++)
	{
		tmp = *(s + j);
		*(s + j) = *(s + i - 1 - j);
		*(s + i - 1 - j) = tmp;
	}
}
/**
* _atoi - function that convert an integer to a string.
* @s: pointer to the string
* Return: the integer
*/
char *itoa(int num)
{
	char* str = NULL;
    int i = 0, j, rem = 0;
    int isNegative = 0;

    /* Handle 0 explicitely, otherwise empty string is printed for 0 */
    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    // In standard itoa(), negative numbers are handled only with
    // base 10. Otherwise numbers are considered unsigned.
    if (num < 0)
    {
        isNegative = 1;
        num = -num;
    }

    // Process individual digits
	j = 0;
    while (num != 0)
    {
        rem = num % 10;
		str[j] = rem + '0';
		j++;
		num = num / 10;
    }

    // If number is negative, append '-'
    if (isNegative)
        str[i++] = '-';

    str[i] = '\0'; // Append string terminator

    // Reverse the string
    rev_string(str);

    return str;
}

/**
* _atoi - function that convert a string to an integer.
* @s: pointer to the string
* Return: the integer
*/
int _atoi(char *s)
{
	unsigned int init, i, sign = 1, is_a_number, begin_of_number, res = 0;

	begin_of_number = 0;
	is_a_number = 0;
	i = 0;
	if (*s == '\0')
	{
		return (res);
	}
	while (is_a_number == 0)
	{
		if ((s[i] >= '0' && s[i] <= '9') && (*s != '\0'))
		{
			is_a_number = 1;
			begin_of_number = i;
		}
		if (s[i] == '-')
		{
			sign = sign * -1;
			i = i + 1;
		}
		else
		i = i + 1;
	}
	init = begin_of_number;
	while ((s[init] >= '0' && s[init] <= '9') && (*s != '\0'))
	{
		res = res * 10 + s[init] - '0';
		init++;
	}
	return (sign * res);
}
/**
 * _strlen - returns the length of a string.
 * @s: parameter pointer var
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * infinite_add - function that adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: is the buffer that the function will use to store the result.
 * @size_r: is the buffer size
 * Return: a pionter to the result of the addition.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum = 0, length1 = 0, length2 = 0, retained;
	int int1 = 0, int2 = 0, k, i, j;
	static char *str =NULL;


	length1 = _strlen(n1);
	length2 = _strlen(n2);

	if ((size_r < length1 + 1) || (size_r < length2 + 1))
	{
		return(NULL);
	}
	if (length1 >= length2)
	{
		retained = 0;
		k = 0;
		for (i = length1 - 1; i > 0; i--)
		{
			j = length2 -1;
			int1 = _atoi(&n1[i]);
			int2 = _atoi(&n2[j]);
			if (j >= 0)
			{
				sum = retained + int1 + int2;
			}
			if (sum > 10)
			{
				sum = sum % 10;
				retained = 1;
			}
			else
			{
				retained = 0;
			}
			if (k <= size_r)
			{
				str = itoa(sum);
				r[k] = str[0];
				k++;
			}
			sum = 0;
		}
		return (r);
	}
	return(NULL);

}
