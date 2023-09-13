#include<stdio.h>
#include"main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 * Discription: function that prints all natural number from n to 98
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
			continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
			continue;
			printf(", ");
		}
		printf("\n");
	}
}
