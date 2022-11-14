#include "lists.h"
#include <string.h>

/**
 * add_node - Creates new head node with 'str' as its 'str' attribute and
 * 'strlen(str)' as its 'len' attribute, makes it point to the current head
 * in '**head', and changes the address in '*head' to point to it.
 *
 * @head: pointer to pointer to current head node. will be used
 * to get to an outside head pointer that needs to be changed to point
 * to new head in the linked list.
 *
 * @str: 'str' attribute of new head.
 *
 * Return: pointer to new head: '*head'
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
	{
		/* malloc failed */
		return (NULL);
	}

	new_head->str = strdup(str);
	if (new_head->str == NULL)
	{
		/* malloc failed */
		free(new_head);
		return (NULL);
	}

	new_head->len = strlen(new_head->str);
	new_head->next = *head;
	/* make new head (with next node being old head) */

	*head = new_head;
	/* change head's pointer to new head */
	return (*head);
	/* return pointer to new head */
}

