#include "lists.h"
#include <string.h>

/**
 * add_node_end - Tries malloc new tail node with 'strdup(str)' as its 'str'
 * attribute and 'strlen(str)' as its 'len' attribute.
 *
 * If the malloc and strdup succeed, it appends it to the end of the
 * list at '**head' by making the list's current tail node point to it.
 *
 * If malloc fails or strdup fail, free all previous allocations
 * then just return NULL.
 *
 * If '**head' is a pointer to a NULL pointer, tail is considered head.
 *
 * @head: pointer to pointer to current head node.
 *
 * @str: 'str' attribute of new head.
 *
 * Return: pointer to new head: '*head'
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t **current = head;

	/* make new tail */
	list_t *new_tail = malloc(sizeof(list_t));

	if (new_tail == NULL)
	{
		return (NULL);
	}

	new_tail->str = strdup(str);
	if (new_tail->str == NULL)
	{
		free(new_tail);
		return (NULL);
	}

	new_tail->len = strlen(str);
	new_tail->next = NULL;

	/* find tail node */
	while (*current)
	{
		current = &((**current).next);
	}

	*current = new_tail;
	/* append tail */

	return (new_tail);
}

