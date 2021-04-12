#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - print the result
 *@argc:integer
 *@argv:string
 *Return:int
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	function = get_op_func(argv[2]);
	if (function == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' && num2 == 0) || (*argv[2] == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = function(num1, num2);
	printf("%d\n", result);
	return (0);
}
