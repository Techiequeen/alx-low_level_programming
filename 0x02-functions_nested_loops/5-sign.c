#include "main.h"

/**
* print_sign - Prints the sign of a number
* @n: The int to check
* Return: returns 1 and print + if n is greater than 0
* 0 and print 0 if n is zero
* -1 and print - if n is less than zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
