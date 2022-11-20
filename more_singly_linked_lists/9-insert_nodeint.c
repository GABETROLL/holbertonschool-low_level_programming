#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts node that has 'n' as its 'n'
 * attribute at the 'idx' index in the '**head' linked list,
 * so that the new node is at the 'idx' index, and the rest
 * of the list is being pointed to by the new node.
 *
 * @head: pointer to pointer to head of linked list
 * @idx: index where new node will end up in
 * @n: number that the new node will contain
 *
 * Return: pointer to new node's address if it was
 * successfully inserted, otherwise: NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t **insert_pointer = head;
	listint_t *old_next_node;
	listint_t *new_node;

	/* find pointer in node that will point at new node */
	while (i < idx)
	{
		/* list wasn't long enough */
		if (insert_pointer == NULL || *insert_pointer == NULL)
		{
			return (NULL);
		}

		insert_pointer = &(**insert_pointer).next;
		i++;
	}

	/* save node to be replaced to be connected to by new node */
	old_next_node = *insert_pointer;

	/* make new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	/* make new node point to old node */
	new_node->next = old_next_node;

	/* change previous node's pointer to point to new node */
	*insert_pointer = new_node;
	return (new_node);
}
