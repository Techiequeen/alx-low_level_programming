#include "main.h"

/**
* _strcpy - function with two arguments
* @dest: destination
* @src: source
* Description: copies the string to an array
* Return: returns the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int count = 0;

while (count >= 0)
{
*(dest + count) = *(src + count);
if (*(src + count) == '\0')
break;
count++;
}
return (dest);
}
