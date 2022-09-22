#include "main.h"

/**
* reverse_array - function with two arguments
* @a: int type pointer first argument
* @n: int type second argument
*
* Description: reverse the content of an array of integers
* Return: value
*/
void reverse_array(int *a, int n)
{
int i, temp;

i = 0;
n--;
while (i < n)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
i++;
n--;
}
}
