#include <stdio.h>
#include <stdlib.h>
/*
 * * main - alpha print
 * Return:0
 */
int main(void)
{
char ch = 'a';
char end = 'z';
for (;ch <= end;ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}

