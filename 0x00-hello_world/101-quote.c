#include <unistd.h>
#include <stdio.h>
/**
 * main - entry point
 * display message new way
 * Return: Error
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
