#include <stdio.h>
#include <stdlib.h>
/**
 * main -alpha print
 * Return:0
 */
int main(void)
{
int n = 48;
for (; n < 58; n++)
{
putchar(n);
}
char ch = 'a';
char end = 'f';
for (; ch <= end; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);

}
