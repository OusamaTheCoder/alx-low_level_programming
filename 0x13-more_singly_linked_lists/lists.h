#ifndef LISTS_H
#define LISTS_H

/*
 * File: lists.h
 * Auth: Ousama The Coder
 * Desc: Header file containing prototypes and definitions for all functions
 *       and types written in the 0x13-more_singly_linked_lists directory.
 */

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for alx-low_level_programming project
 */
typedef struct listint_s
{
	int n;              /* Integer value stored in the node */
	struct listint_s *next; /* Pointer to the next node in the list */
} listint_t;            /* Alias for the struct */

/* Function prototypes for working with singly linked lists */

size_t print_listint(const listint_t *h);
/* Print all elements of a linked list. */

size_t listint_len(const listint_t *h);
/* Calculate the length (number of nodes) of a linked list. */

listint_t *add_nodeint(listint_t **head, const int n);
/* Add a new node with a given integer value to the beginning of the list. */

listint_t *add_nodeint_end(listint_t **head, const int n);
/* Add a new node with a given integer value to the end of the list. */

void free_listint(listint_t *head);
/* Free the memory allocated for a linked list. */

void free_listint2(listint_t **head);
/* Free the memory allocated for a linked list and set the head to NULL. */

int pop_listint(listint_t **head);
/* Remove the first node of the linked list and return its value. */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/* Get the node at a specified index in the linked list. */

int sum_listint(listint_t *head);
/* Calculate the sum of all the integer values in the linked list. */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/* Insert a new node with a given integer value at a specified index in the list. */

int delete_nodeint_at_index(listint_t **head, unsigned int index);
/* Delete a node at a specified index in the linked list. */

listint_t *reverse_listint(listint_t **head);
/* Reverse the linked list in place. */

size_t print_listint_safe(const listint_t *head);
/* Print all elements of a linked list safely, handling loops. */

size_t free_listint_safe(listint_t **h);
/* Free the memory of a linked list safely, handling loops. */

listint_t *find_listint_loop(listint_t *head);
/* Find the beginning of a loop in a linked list if one exists. */

#endif

