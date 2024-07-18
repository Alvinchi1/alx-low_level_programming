#include "search.algos.h"

/**
 *jum_list - searches for an algorithm in a sorted 
 *		linked list of integers using jump search
 *@list: a pointer to the head of the linked list
 *
 *@size: the nuber of nodes in the list.
 *@value: the value searched for
 *
 *Return: NULL if head of list is NULL or not present
 *	Otherwise, a pointer to he first node where the value is located
 *Description: printsa a value everytime it's compared tin the 
 */

listin_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (node = jump = list; jump-> + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%i]\n", jump->index, jump->n);
	}

	printf("Value founr between indexes[%ld] and  [%ld]\n",
			node->index, jump->index);



	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%ld]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%ld]\n", node->index, node->n);


	return (node->n == value ? node : NULL);
}
