#include "main.h"

/**
* _islower - A program that would show 1 if the inputs
* is a lowercase character. Shows 0 if it is another case
*
* @c: The character in ASCII code
*
* Return: 1 for lowercase. 0 for the rest
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
