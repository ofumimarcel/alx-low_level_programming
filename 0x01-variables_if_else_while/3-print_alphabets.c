#include <stdio.h>

/**
 *main - print lowercase then uppercase
 *Return: end
 */

int main(void)
{
char lower = 'a';
char upper = 'A';

while (lower <= 'z')
{
putchar(lower);
lower++;
}

while (upper <= 'Z')
{
putchar(upper);
upper++;
}

putchar('\n');

return (0);
}
