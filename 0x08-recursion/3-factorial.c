#include"main.h"
/**
 *factorial-factorialofint
 *@n:int
 *Return:int
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		n *= factorial(n - 1);
	}
	return (n);
}
