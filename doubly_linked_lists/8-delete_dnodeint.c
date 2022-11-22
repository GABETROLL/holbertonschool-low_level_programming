#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/* node previous to the node to delete */
	dlistint_t *prev_ptr = NULL;
	/*
	 * to find the pointer to the node to delete
	 * (like the head pointer or the previous node's
	 * 'next' attribute)
	 */
	dlistint_t **del_node_ptr_ptr = head;
	/* to free node to delete */
	dlistint_t *del_node_ptr;
	/* node next to the node to delete */
	dlistint_t *next_ptr = NULL;

	unsigned int index_count = 0;

	/* find pointer to node to delete and its previous */
	for (; index_count < index; index_count++)
	{
		if (!del_node_ptr_ptr || !(*del_node_ptr_ptr))
			return (-1);

		prev_ptr = *del_node_ptr_ptr;
		del_node_ptr_ptr = &(**del_node_ptr_ptr).next;
	}

	del_node_ptr = *del_node_ptr_ptr;
	/* index was one more than tail node */
	if (del_node_ptr == NULL)
		return (-1);

	/* pointer to node next to node to delete */
	next_ptr = (**del_node_ptr_ptr).next;

	/* there may not be a next node */
	if (next_ptr)
		next_ptr->prev = prev_ptr;

	*del_node_ptr_ptr = next_ptr;

	free(del_node_ptr);

	return (1);
}

