#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"
/**
* main - entry point
* prints 10 decimal numbers
* Return: success
*/

int main(void)
{
int fd = 0;
fd = open("fileH.txt", 0600);
print();
close(fd);
return (0);
}