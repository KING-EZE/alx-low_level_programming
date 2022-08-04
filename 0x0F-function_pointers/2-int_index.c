#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: a pointer
 * @size: size of an array
 * @cmp: pointer of a function
 * Return: the value of i for success else return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
}
