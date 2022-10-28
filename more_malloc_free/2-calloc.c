#include <stdlib.h>

/**
 * _calloc - Allocates an array that contains
 * items of a data type who's byte size is
 * the parameter nmemb, and that its amount
 * of items is the parameter 'size'.
 *
 * @nmemb - the byte size of all items in the array
 * @size - the amount of items in the array
 *
 * Return: pointer to created array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int byte_size;
	/* byte size of result array */
	char *result;
	/* pointer to result array */
	int i;
	/* looping index */

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	byte_size = nmemb * size;

	result = malloc(byte_size);
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < byte_size; i++)
	{
		result[i] = 0;
	}
	/* set all bytes to 0 */

	return ((void *)result);
}

