#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *Return: pointer to the destination
 */
char *_strncat(char *dest, char *src, int n)
{
int dlen = 0, j = 0;
while (dest[dlen])
{
dlen++;
}
while (j < n && src[j])
{
dest[dlen] = src[j];
dlen++;
j++;
}
dest[dlen + n + 1] = '\0';
return (dest);
}
