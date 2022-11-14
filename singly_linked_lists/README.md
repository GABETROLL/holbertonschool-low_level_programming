# Linked Lists
## What is a linked list?
A linked list is a group of structs with a head struct that contain values, and a pointer to another linked list.:
```
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```
## In these exercises, we'll learn how to:
0. print each item of each node in a linked list
1. print the length of a linked list
2. add a node to the beggining of a linked list
3. add a node to the end of a linked list

