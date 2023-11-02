#include "search_algos.h"

/**
 * binary_search - Searches and returns the index
 * of the value called 'value' in an array of SORTED
 * ints called 'array'.
 *
 * @array: pointer to first integer in int array,
 * where ALL THE INTS ARE SORTED.
 *
 * @size: amount of ints in array
 * (NOT MAKING 'size' BE THE LENGTH OF THE ARRAY
 * CAN LEAD TO UNDEFINED BEHAVIOUR)
 *
 * @value: value to search inside array
 *
 * Return: index of value in array if it's present,
 * otherwise: -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t section_start = 0;
	size_t section_len = size;

	if (!array)
		return (-1);
	while (array[section_start] <= value && section_len)
	{
		size_t print_index = 0;
		size_t right_half_start;

		/* printing */
		printf("Searching in array: ");
		for (; print_index < section_len; print_index++)
		{
			printf("%d", array[section_start + print_index]);
			if (print_index < section_len - 1)
				printf(", ");
		}
		printf("\n");
		/* found */
		if (array[section_start] == value)
			return ((int)section_start);
		/*
		 * searching
		 * (If the current section's length is odd,
		 * the right half should be shorter)
		 */
		right_half_start = section_start + section_len
			- (section_len >> 1);
		if (array[right_half_start] <= value)
		{
			section_start = right_half_start;
			section_len >>= 1;
		}
		else
			section_len = (section_len + 1) >> 1;
	}
	return (-1);
}

