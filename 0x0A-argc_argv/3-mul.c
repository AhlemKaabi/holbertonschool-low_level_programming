#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @argc: number of arguments
* @argv: arrany of the argc arguments content
* Return: integer
*/
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
