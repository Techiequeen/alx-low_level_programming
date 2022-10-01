#include "main.h"

/**
* _strncat - pointer function with three arguments
* @dest: char type pointer first argument
* @src: char type pointer second argument
* @n: int type third argument
*
* Description: concatenates two strings
* Return: string
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
j = 0;
while (dest[i] != '\0')
{
i++;
}
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
return (dest);
}
