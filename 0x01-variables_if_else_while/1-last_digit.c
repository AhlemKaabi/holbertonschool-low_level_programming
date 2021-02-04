#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
* compare last number
* Return: success
*/
int main(void)
{
int n, lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;

/*get the last digit*/
lastDigit = n % 10;

if (lastDigit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
else if (lastDigit == 0)
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
/* your code goes there */
return (0);
}
