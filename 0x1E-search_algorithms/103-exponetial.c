#include "search_algos.h"

int binary_search_helper(int *array, int value, size_t low, size_t high);
size_t min(size_t a, size_t b);

/**
 *min: returns the min of two size_t values
 *@a: first value
 *
 * @b: second value
 * Return: 'a' if <= b, 'b' otherwise
 */

size_t(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 *binary_search: searches value in int array using a
 *binary search algorithm, won't return lowest if value appears twice in array
 *@array: pointer to first element of array to search
 *@value: value to search
 *@low: starting index
 *@high: ending index
 */

int binary_search_helper(int *array, int value, size_t low, size_t high);
{
	size_t mid, i;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return ((int)mid);
	}
	return (-1)
}

/**
 *exponetial_search : searches for values in sorted array
 *using expo search engine
 *@array: pointer to first element in array
 *@size: number of elements in array
 *@value: value for search
 *
 *
 * return: first index containing value or -1 if value not found
 * or in array as NULL
 */

int exponetial_search(int *array, size_t size, int value)
{
	size_t low, high, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%i]\n",
				bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = min(bound, size - 1);
	/* 'found' message generated even if array [high] < value */
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_helper(array, value, low, high));
}

