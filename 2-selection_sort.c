#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * selection_sort - sorts an array of integers in ascending order
  *      using selction sort
  * @array: the array to sort using selection sort
  * @size: the siz of the array
  * Return: nothing
  */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			int temp;

			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
