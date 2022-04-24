#include "main.h"
/**
 * _strcat - fuction that concatinates two strings
 *
 * @dest: pointer to destination input
 * @src: pointer tp source input
 * Return: returning pointer to resulting strings dest
 */

char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0;
/*find the size of dest array*/
while (dest[c])
c++;
/* iterate through each scr array value without the nu;; byte*/
for (c2 = 0; src[c2] ; c2++)
/* append src[c2] to dest[c] while overwritting the null byte in dest*/
dest[c++} = src[c2];
return (dest);
}
