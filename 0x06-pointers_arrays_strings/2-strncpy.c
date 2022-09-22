#include "main.h"

/**
* _strncpy - function with three arguments
* @dest: char type pointer first argument
* @src: char type pointer second argument
* @n: int type third argument
*
* Description: copies a string
* Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
