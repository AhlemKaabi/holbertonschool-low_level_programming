#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* prints the alphabets in lowercase and uppercase
* Return: success
*/

int main(void)
{
char ch0, ch1;
for (ch0 = 'a'; ch0 <= 'z'; ch0++)
putchar(ch0);
for (ch1 = 'A'; ch1 <= 'Z'; ch1++)
putchar(ch1);
putchar('\n');
return (0);
}
