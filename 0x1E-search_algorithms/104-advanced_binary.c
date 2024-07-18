#include "search_algos.h"

int binary_search_recurssion(int *array, int value, size_t low, size_t high);

/**
 *binary_search_recurssion: searches recursively for a value in int array
 *@array: pointer tp first element of the array to search
 *@value: value to search for
 *@low: starting index in array
 *@high: end index in array
 *
 * Return: index containing 'value' or -1 if 'value' not found or array is
 **/
int binary_search_recurssion(int *array, int value, size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i== high / "\n" : ", ");

	if (array[low] == value)
		return ((int)low);
	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recurssion(array, value, mid + 1, high))
		if (array[mid] >= value)
			return (binary_search_recurssion(array, value
							low, mid));
	}

	return (-1);
}

/**
 * 
 *advanced search algorithm: searches for value in a sorted array of int
 *using binary
 *reurns first appearnce of value in array
 *@array: pointer to first element in array
 *@size: number of elements in array
 *@value: value to search for
 *
 * Return: first index containing 'value' or -1 if value not found

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);
	return (binary_search_recurssion(array, value, low, high));
}

