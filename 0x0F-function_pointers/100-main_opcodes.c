#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of main
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	int (*main_ptr)();

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	/* pointer points to start of main */
	main_ptr = main;
	for (i = 0; i < atoi(argv[1]) - 1; i++)
	{
		printf("%02hhx ", *((int *)main_ptr++));
	}
	printf("%02hhx\n", *((int *)main_ptr++));
	return (0);
}
