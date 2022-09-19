#include "main.h"

/**
* _strcpy - function with two arguments
* @dest: first argument char type pointer
* @src: second argument char type pointer
*
* Description: copies the string to an array
* Return: na
*/
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < src[i]; i++)
dest[i] = '\0';
return (dest);
}
