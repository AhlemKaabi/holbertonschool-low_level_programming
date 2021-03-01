#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - entry point
* @argc: number of arguments
* @argv: arrany of the argc arguments content
* Return: integer
*/
int main(int argc, char *argv[])
{
	int i, j, x = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
				else
				{
					x = x + atoi(argv[i]);
				}
			}
		}
		printf("%i\n", x);
	}
	return (0);
}
