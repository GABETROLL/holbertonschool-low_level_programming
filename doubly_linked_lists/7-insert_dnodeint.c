#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts node with 'n' attribute
 * into the position 'idx' in linked list '**h'.
 *
 * If h is NULL or if there's not enough elements to
 * insert a new node in index 'idx', returns NULL.
 *
 * If the index is one more than the tail,
 * the new node becomes the new tail.
 *
 * If the list has no nodes and 'idx' is 0, the new node
 * is considered the head of the linked list.
 *
 * @h: pointer to pointer to head of linked list
 * @idx: index to insert new node int
 * @n: 'n' attribute of new node to insert
 *
 * Return: pointer to new node if it was successfully malloc'ed
 * and added according to the text above, otherwise: 0
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* pointer to node previous to the node at idx */
	dlistint_t *prev_ptr = NULL;
	/*
	 * pointer to pointer to node at index 'idx',
	 * 'next' field in *prev_ptr
	 */
	dlistint_t **idxth_node_ptr_ptr = h;

	unsigned int idx_count;
	dlistint_t *new_node;

	for (idx_count = 0; idx_count < idx; idx_count++)
	{
		/*
		 * there's no node at index 'idx'
		 * or h was NULL.
		 */
		if (!idxth_node_ptr_ptr || !(*idxth_node_ptr_ptr))
			return (NULL);

		prev_ptr = *idxth_node_ptr_ptr;
		idxth_node_ptr_ptr = &(**idxth_node_ptr_ptr).next;
	}

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

	/* put new node in index 'idx' */
	*idxth_node_ptr_ptr = new_node;
	return (new_node);
}

