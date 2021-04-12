#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: argument count
 *@argv: arguments
 * Return: always true
**/
int main(int argc, char **argv)
{
	int num1, num2;
	int (*fun_ptr)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	/* printf("------ test params --------\n"); */
	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && num2 == 0)
	{
		printf("Error");
		exit(100);
	}
	/* printf("------ test verif completed --------\n"); */
	fun_ptr = *get_op_func(argv[2]);
	if (fun_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	/* printf("---------- ptr sent completed -----------\n"); */
	result = fun_ptr(num1, num2);
	printf("%d\n", result);
	/* TODO check op = NULL */
	return (0);
}
