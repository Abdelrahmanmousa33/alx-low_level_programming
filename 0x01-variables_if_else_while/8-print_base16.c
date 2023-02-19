#include <stdio.h>
#include <stdlib.h>
/**
 * main -alpha print
 * Return:0
 */
int main(void)
{
char end = 'f';
char ch = 'a';
int n = 48;
for (; n < 58; n++)
{
putchar(n);
}
for (; ch <= end; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);

}
