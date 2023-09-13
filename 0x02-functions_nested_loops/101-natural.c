#include <stdio.h>
/**
* main-Lists all the natural numbers below 1024 that are multiples of 3 or 5.
* Return: Always 0.
*/
int main(void)
{

	int y, x = 1024, sum = 0;

		for (y = 0; y < x; y++)
		{
			if ((y % 3 == 0) || (y % 5 == 0))
				sum = sum + y;
		}
		printf("%d\n", sum);
		return (0);
}
