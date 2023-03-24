#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */

int main(void)
{
int c = 3;
long int a  = 1, b = 2;
long int n = a + b;
printf("%lu, ", a);
rintf("%lu, ", b);
while (c <= 50)
{
if (c == 50)
{
printf("%lu \n", n);
}
else
{
printf("%lu, ", n);
}
a = b;
b = n;
n = a + b;
c++;
}
return (0);
}
