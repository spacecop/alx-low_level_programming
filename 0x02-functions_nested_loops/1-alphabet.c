#include "main.h"
/**
 * main - entry point
 *
 * Return: 0 after printing
 */
void print_alphabet(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
return (0);
}
