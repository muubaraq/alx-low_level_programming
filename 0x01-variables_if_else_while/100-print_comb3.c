#include <stdio.h>

/**
 * main - prints out all the possible numbers between 00 and 99
 * without printing same digits
 * Return: 0
 */
int main(void)
{
int m, u;

for (m = 48; m < 58; m++)
{
for (u = m; u < 58; u++)
{
  if (m == u)
{
  continue;
}
  putchar(m);
  putchar(u);

if (m == 56 && u == 57)
{
break;
}
else
{
  putchar(',');
  putchar(' ');
}
}
}
putchar('\n');
return (0);
}