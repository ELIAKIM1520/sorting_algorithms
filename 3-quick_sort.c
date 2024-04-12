#include "sort.h"
/**
  * quick_sort - sorts an array of integers in ascending order
  * using the Quick sort algorithm
  * @array: the array to sort its elements
  * @size: the size of the array @array
  * Return: returns nothing
  */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sorting(array, 0,  size - 1);
}
/**
  * lemuto_partition - it partitions the array
  * @array: the array to partition
  * @lower: starting index of the partition
  * @upper: ending index of the partition
  * Return: returns an index pivot element after partitioning
  */
int lemuto_partition(int *array, int lower, int upper)
{
	int pivot = array[upper];
	int i = lower - 1;
	int j, temp;

	for (j = lower; j <= upper - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, upper - lower + 1);
		}
	}
	temp =  array[i + 1];
	array[i + 1] = array[upper];
	array[upper] = temp;
	print_array(array, upper - lower + 1);
	return (i + 1);
}
/**
  * quick_sorting - recursively sorts an array using quick sort
  * @array: the array to be sorted
  * @lower: the starting index of the partition to be sorted
  * @higher: the ending index of the partition to be sorted
  * Return: returns nothing
  */
void quick_sorting(int *array, int lower, int upper)
{
	if (lower < upper)
	{
		int pivot_loc = lemuto_partition(array, lower, upper);
		quick_sorting(array, lower, pivot_loc - 1);
		quick_sorting(array, pivot_loc + 1, upper);
	}
}
