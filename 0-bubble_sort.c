#include <stdio.h>
#include "sort.h"
/**
  * bubble_sort - sorts an array of integers in ascending order
  * @array: the array to sort using the bubble sort algorithm
  * @size: the size of the array to sort
  * Return: nothing
  */
void bubble_sort(int *array, size_t size)
{
	int temp, flag;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
