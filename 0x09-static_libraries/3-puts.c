#include "main.h"

/**
* _puts - Function with one argument
* @str: one char type argument
*
* Description: printa string followed by a new line to stdout
* Return: none
*/
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
