#include <stdio.h>

/**
 *main - print alphabet reversed
 *Return: End
 */

int main(void)
{
char alpha = 'z';

while (alpha >= 'a')
{
putchar(alpha);
alpha--;
}
putchar('\n');

return (0);
}
