#include <stdio.h>

/**
 *main - Entry point
 *Description: whatever the programme does
 *Return: Always 0 (Success)
 */
int main(void)
{
float floatType;
double doubleType;
int intType;
char charType;

printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of double: %zu bytes\n", sizeof(doubleType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of char: %zu bytes\n", sizeof(charType));

return (0);
}
