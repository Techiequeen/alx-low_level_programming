#include "main.h"
/**
* _memcpy - program that copies the memory area
* @dest: destination memory are
* @src: source memory area
* @n: bytes filled
* Return: the pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
*(dest + i) = *(src + i);

return (dest);
}
