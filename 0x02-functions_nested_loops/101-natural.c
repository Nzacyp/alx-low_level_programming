#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int b;
b = 0;
for (i = 0 ; i < 1024 ; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
b = b + i;
}
}
printf("%d\n", b);
return (0);
}
