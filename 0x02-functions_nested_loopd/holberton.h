#include <unistd.h>
void print(void)
{
fprintf(stderr, "Holberton\n");
}
int _putchar(char c)
{
return (write(1, &c, 1));
}