#include<stdio.h>

#include <stdlib.h>

#include <time.h>



/**
* main - prints the last digit of n and prints out whether
*
* it is greater than 5, 0, or less than 6
*
* Return: Always 0 (Success)
*/



int main(void)

{
	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there 

	if (n > 5)

		printf("%d and is greater than 5\n", n);

	else if (n == 0)

		printf("%d and is 0\n", n);

	else

		printf("%d is negative\n", n);*/

	return (0);

}


