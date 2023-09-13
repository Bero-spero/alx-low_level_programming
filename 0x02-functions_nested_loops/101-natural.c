#include <stdio.h>
 /**
 * main - check for all multiples of 3 and 5 below 1024 .
 * Return: 0 always
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
