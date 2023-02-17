#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main -print last
 * Return:0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int tmp = n % 10;
printf("Last digit of %d is", n)
if (tmp > 5)
{
printf("%d and is greater than 5\n", tmp)
}
else if (tmp == 0)
{
printf("%d and is zero\n", tmp)
}
else
printf("%d and is less than 6 and not 0\n", tmp)
return (0);
}
