#include"main.h"
/**
 * reverse_array -  void function reverse the array
 * @a: the array of numbers
 * @n: the size of array
 */
void reverse_array(int *a, int n)
{
	int x;
	int i = (n - 1);
	int tmp;

	for (x = 0; x < i; x++)
	{
		tmp = a[x];
		a[x] = a[i];
		a[i] = tmp;
		i--;
	}
}
