#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* print all the numbers of base 16 in lowercase.
* Return: success
*/

int main(void)
{
	char ch0, ch1;

	for (ch0 = '0'; ch0 <= '9'; ch0++)
		putchar(ch0);
	for (ch1 = 'a'; ch1 <= 'f'; ch1++)
		putchar(ch1);
	putchar('\n');
	return (0);
}
