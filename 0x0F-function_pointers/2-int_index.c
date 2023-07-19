#include "function_pointers.h"
/**
 * int_index - Write a function that searches for an integer
 *@cmp : function pointer
 *@array : array of element
 *@size : size of array
 * Return: -
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
	for (i = 0; i < size ; i++)
	{
		if ((*cmp)(*(array + i)) != 0)
		{
			return (i);
		}
	}
}
return (-1);
}
