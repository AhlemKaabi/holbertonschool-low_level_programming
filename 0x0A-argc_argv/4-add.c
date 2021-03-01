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
	int i,x = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
				if (atoi(argv[i]) == 0)
				{
					printf("Error\n");
					return (1);
				}
				else
					x = x + atoi(argv[i]);	
		}
		printf("%i\n", x);
	}
	return (0);
}
