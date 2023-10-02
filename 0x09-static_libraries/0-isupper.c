#include"main.h"
/**
 *  * _isupper-check fo ruppercase
 *   *@c:parameter to be checked
 *Return:Returns 1ifc isupper case Returns 0otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
