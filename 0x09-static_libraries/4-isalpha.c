#include "main.h"

/**
* _isalpha - A program that shows 1 if the input is c
* Shows 0 if it is other letters
*
* @c: The charater in ASCII code
*
* Return: 1 for letters. Returns 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
