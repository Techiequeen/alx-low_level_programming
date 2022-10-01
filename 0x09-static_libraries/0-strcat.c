#include "main.h"

/**
* _strcat - functions with two arguments
* @dest: char type pointer first argument
* @src: char type pointer second argument
*
* Description: concatenates two strings
* Return: return pointer to dest
*/
char *_strcat(char *dest, char *src)
{
int count = 0, count2 = 0;

while (*(dest + count) != '\0')
{
count++;
}

while (count2 >= 0)
{
*(dest + count) = *(src + count2);
if (*(src + count2) == '\0')
break;
count++;
count2++;
}
return (dest);
}
