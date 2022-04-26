#include "main.h"
#include <stdio.h>
/**
* _strcat - Concatenates the string pointed to by src
*          null byte, to the end of the string pointed to by @dest
* @dest: A pointer to the string to be concatenated upon.
* @src: The source string to be appended to @dest.
*
* Return: A pointer to the destination string @dest.
*/
char *_strcat(char *dest, const char *src)
{
int i;
int j;
i = 0;
j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
