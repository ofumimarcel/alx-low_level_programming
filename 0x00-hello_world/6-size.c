#include <stdio.h>
/**
* main - Prints the size of various types
* Return: Always 0
*/
int main(void)
{
printf("Size of a char: %id byte(s)\n", sizeof(char));
printf("Size of an int: %id byte(s)\n", sizeof(int));
printf("Size of a long int: %id byte(s)\n", sizeof(long int));
printf("Size of a long long int: %id byte(s)\n", sizeof(long long int));
printf("Size of a float: %id byte(s)\n", sizeof(float));
}
