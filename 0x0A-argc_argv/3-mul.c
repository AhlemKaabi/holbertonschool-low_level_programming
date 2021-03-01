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
	int x = 0;

	if (argc > 1)
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", x);
	}
	else
	{
		printf("Error\n");
	}
	return(1);
}
