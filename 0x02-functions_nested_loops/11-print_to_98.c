#include<stdio.h>
#include"main.h"
/**
 * * jack_bauer - prints every minute of the day of Jack Bauer
* starting from 00:00 to 23:59
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
			continue;
			printf(",");
		}
		printf("\n");
	}
	else
	{
		for (n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
			continue;
			printf(",");
		}
		printf("\n");
	}
}
