#include "main.h"
/**
 * main - entry point
 * Return: 0 after printing
 */
int main(void)
{
char c;
c='a';
while (c<='z')
{
_putchar("%c ",c);
c++;
}
_putchar("lower case c:\n");
return (0);
}
