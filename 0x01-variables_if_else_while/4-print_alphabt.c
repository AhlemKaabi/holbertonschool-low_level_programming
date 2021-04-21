#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* prints the alphabet in lowercase exept q end e
* Return: success
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch != 'q') && (ch != 'e'))
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
