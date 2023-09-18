#include"main.h"
/**
 *swap_int-swap
 *@a:pointerforthenumer1
 *@b:pointerforthenumer2
 *Return:Void
*/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
