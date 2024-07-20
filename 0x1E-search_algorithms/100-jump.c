#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: array of integers being searched.
 * @size: the size of the array being searched.
 * @value: the int value the array is searched for.
 *
 * Return: the first index where value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, left, high, i;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);
	left = 0;
	high = jump;
	while (high <= size - 1)
	{
		if (value >= array[left] && value <= array[high])
			break;
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		left += jump;
		high += jump;
	}
	printf("Value checked array[%ld] = [%d]\n", left, array[left]);
	printf("Value found between indexes [%ld] and [%ld]\n", left, high);
	for (i = left; i <= size - 1; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
