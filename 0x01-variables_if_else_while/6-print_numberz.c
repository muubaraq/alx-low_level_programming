#include <stdio.h>

/**
 * main - prints out all numbers under
 * without using any char variables
 * Return: 0
 */
int main(void)
{
int m = 48;

while (m < 58)
{
    putchar(m);
    m++;
}
putchar('\n');
return (0);
}