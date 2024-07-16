#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int firstElement = 0;
	int lastElement = size - 1;

	if (array == NULL)
		return (-1);

	while (firstElement <= lastElement)
	{
		int i;
		int middElement = (firstElement + lastElement) / 2;

		printf("Searching in array: ");
		for (i = firstElement; i <= lastElement; i++)
		{
			if (i == lastElement)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		if (array[middElement] == value)
			return (middElement);
		if (array[middElement] < value)
			firstElement = middElement + 1;
		else
			lastElement = middElement - 1;
	}
	return (-1);
}
