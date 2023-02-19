#include <stdio.h>
#include <stdlib.h>
/**
 * main -p
 * Return:0
 */
int main(void)
{
int n = 48;
for (; n < 58; n++)
{
putchar(n);
if (n == 57)
{
putchar('\n');
exit(0);
}
putchar(',');
putchar(' ');
}
return (0);
}
