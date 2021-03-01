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
	int i, x = 0;

	if (argc == 1)
		printf("0\n");


	else if (atoi(argv[1]) >= 0)
	{
		for (i = 0; i < argc; i++)
		{
			x = x + atoi(argv[i]);
		}
		printf("%i\n", x);
	}
	else
		printf("Error\n");
	return(1);
}
