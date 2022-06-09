#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of buffer to print
 * @size: the size of memory to print
 *
 * Return: nothing
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;
	
	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n")
}


/**
 * _calloc - allocates memory for nmeb elements of sizebytes
 * @nmemb: number of elements in the array
 * @size: bytes for each position in array
 * Return: pointer void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULLL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);

}
