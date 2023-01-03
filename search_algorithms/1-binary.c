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
		size_t section_right_half;
		size_t new_section_len;

		/* printing */
		printf("Searching in array: ");
		for (; print_index < section_len; print_index++)
		{
			printf("%d", array[section_start + print_index]);
			if (print_index < section_len - 1)
				printf(", ");
		}
		printf("\n");

		/* searching */
		if (array[section_start] == value)
			return ((int)section_start);

		new_section_len = section_len >> 1;
		/*
		 * if the section_len is odd, we want the right
		 * section to be the short one. Thanks to
		 * right shifting converting 7/2 to 3 and
		 * 5/2 to 2, the difference of section_len and
		 * new_section_len will give us the index of the
		 * right side.
		 */
		section_right_half = section_start + section_len - new_section_len;

		if (array[section_right_half] <= value)
			section_start = section_right_half;

		section_len >>= 1;
	}

	return (-1);
}

