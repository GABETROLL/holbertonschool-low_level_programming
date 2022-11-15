# More linked lists
## Struct used in this directory:
```
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```
## Scripts:
0. Print all ints in a linked list of integers
1. Print how many nodes a linked list has (NEVER counting the null pointer)
2. Add node to beggining of a linked list (making new head and setting old head's pointer to point to new head)
3. Add node to the end of a linked list
4. Free linked list
5. Free linked list (and set pointer to head to NULL)
6. Free the head node of a linked list (and set pointer to head to new head)
7. Get the node at a specific index in a linked list (if the list's capacity allows it)
8. Add all of the values of a linked list
9. Insert a node in a specific index in a linked list (and re-connecting the following nodes, if any)
10. Free a node in a specific index in a linked list (and re-connecting all remainding nodes)

