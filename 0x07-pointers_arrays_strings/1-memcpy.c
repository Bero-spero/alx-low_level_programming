#include"main.h"
/**
 * _memcpy-copies memory area.
 * @dest:Returns apointer to dest
 * @src:memoryareasrc.
 * @n:number ofbcopies bytes
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
