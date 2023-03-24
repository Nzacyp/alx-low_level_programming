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


while (c <= 50)
{
printf("%d, ", a);
printf("%d, ", b);
}
if (c == 50)
{
printf("%d \n", n);
}
else
{
printf("%d, ", n);
}
a = b;
b = n;
n = a + b;
c++;

return (0);
}
