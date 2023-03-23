#include <stdio.h>

/**
 * main - Entry point
 * autor: sammy
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char kingx;
for (i = 48; i < 58; i++)
putchar(i);
for (kingx = 'a'; kingx <= 'f'; kingx++)
putchar(kingx);
putchar('\n');
return (0);
}
