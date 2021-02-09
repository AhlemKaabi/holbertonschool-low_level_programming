#include <unistd.h>

void print(void)
{
int fd = 0;
write(fd, "Holberton\n", 10);
}
int _putchar(char c)
{
return (write(1, &c, 1));
}