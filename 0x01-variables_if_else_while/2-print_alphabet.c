#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* prints the alphabet in lowercase
* Return: success
*/

int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
