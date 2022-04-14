#include "main.h"
/**
 * main - entry point
 *
 * Return: 0 after printing
 */
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
return (0);
}
