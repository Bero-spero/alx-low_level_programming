#include"main.h"
/**
 *_strncat-concatenatestwostrings.
 *@dest:pointertostr
 *@src:pointertostr2
 *@n:pointerforthenumber
 *Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len])
		len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
