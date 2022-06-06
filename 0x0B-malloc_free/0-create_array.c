#include "main.h"
/**
 * create_array - array for printed strings
 * @size: number elements array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/*Define values with mallox*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		postion = 0;
		while (position < size) /*while for array*/
		{
			*(buffer + position) = c;
			position++;
		}
		return (buffer);
	}
}
