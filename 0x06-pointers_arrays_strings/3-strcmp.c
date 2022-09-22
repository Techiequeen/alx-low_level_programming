#include "main.h"

/**
* _strcmp - function with two arguments
* @s1: pointer char type first argument
* @s2: pointer char type second argument
*
* Description: compare two strings
* Return: 0 for same string, other for not same string
*/
int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}
