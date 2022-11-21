#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* pointer to node previous to the node at idx */
	dlistint_t *prev_ptr = NULL;
	/*
	 * pointer to pointer to node at index 'idx',
	 * 'next' field in *prev_ptr
	 */
	dlistint_t **idxth_node_ptr_ptr;

	unsigned int idx_count;
	dlistint_t *new_node;

	if (h == NULL)
		return (NULL);

	idxth_node_ptr_ptr = h;

	for (idx_count = 0; idx_count < idx; idx_count++)
	{
		/* there's no node at index 'idx' */
		if (!(*idxth_node_ptr_ptr))
			return (NULL);

		prev_ptr = *idxth_node_ptr_ptr;
		idxth_node_ptr_ptr = &(**idxth_node_ptr_ptr).next;
	}

	/* make new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = prev_ptr;
	/* new_node->next = current_node_at_idx */
	new_node->next = *idxth_node_ptr_ptr;

	/* if there is a node at index 'idx' */
	if (*idxth_node_ptr_ptr)
		/* current_node_at_idx.prev = new_node */
		(**idxth_node_ptr_ptr).prev = new_node;

	/* if new_node isn't being inserted at index 0 */
	if (prev_ptr)
		prev_ptr->next = new_node;

	return (new_node);
}

