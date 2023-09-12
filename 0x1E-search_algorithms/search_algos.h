#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: Integer
 * @index: Index
 * @next: Pointer
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
        int n;
        size_t index;
        struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked
 * @n: Int
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer
 * Description: singly linked list node struct
 */
typedef struct skiplist_s
{
        int n;
        size_t index;
        struct skiplist_s *next;
        struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
