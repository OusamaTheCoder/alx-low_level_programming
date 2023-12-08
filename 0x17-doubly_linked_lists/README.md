# 0x17. C - Doubly Linked Lists

## Project Overview

This project focuses on understanding and implementing doubly linked lists in the C programming language. A doubly linked list is a data structure that consists of a sequence of elements in which each element points to both the previous and the next element in the sequence. The project covers various operations on doubly linked lists, such as deletion, insertion, printin g, and more.

## Learning Objectives

Upon completing this project, you should be able to:

- Define what a doubly linked list is.
- Utilize doubly linked lists in C.
- Implement various operations, including insertion and deletion, with doubly linked lists.
- Develop the ability to find relevant information independently.

## Resources

Before starting the tasks, make sure to read or watch the following resources:

- [What is a Doubly Linked List](https://en.wikipedia.org/wiki/Doubly_linked_list)

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All files interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All files should end with a new line
- A `README.md` file, at the root of the project folder, is mandatory
- Code should follow the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- Do not use global variables
- Limit to no more than 5 functions per file
- Only use the C standard library functions: `malloc`, `free`, `printf`, and `exit`
- Header file named `lists.h` should contain prototypes of all functions
- Include guard for all header files

### Data Structure

Use the following data structure for this project:

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Copyright - Plagiarism

- Come up with solutions for the tasks yourself to meet the learning objectives.
- Do not copy and paste someone else’s work.
- Do not publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Tasks

### 0. Print List (`0-print_dlistint.c`)

Write a function that prints all the elements of a `dlistint_t` list.

- Prototype: `size_t print_dlistint(const dlistint_t *h);`
- Return: the number of nodes
- Format: see example

### 1. List Length (`1-dlistint_len.c`)

Write a function that returns the number of elements in a linked `dlistint_t` list.

- Prototype: `size_t dlistint_len(const dlistint_t *h);`

### 2. Add Node (`2-add_dnodeint.c`)

Write a function that adds a new node at the beginning of a `dlistint_t` list.

- Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- Return: the address of the new element, or NULL if it failed

### 3. Add Node at the End (`3-add_dnodeint_end.c`)

Write a function that adds a new node at the end of a `dlistint_t` list.

- Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- Return: the address of the new element, or NULL if it failed

### 4. Free List (`4-free_dlistint.c`)

Write a function that frees a `dlistint_t` list.

- Prototype: `void free_dlistint(dlistint_t *head);`

### 5. Get Node at Index (`5-get_dnodeint.c`)

Write a function that returns the nth node of a `dlistint_t` linked list.

- Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
- Return: the address of the nth node, or NULL if it does not exist

### 6. Sum List (`6-sum_dlistint.c`)

Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.

- Prototype: `int sum_dlistint(dlistint_t *head);`
- Return: the sum of all data, or 0 if the list is empty

### 7. Insert at Index (`7-insert_dnodeint.c`)

Write a function that inserts a new node at a given position in a `dlistint_t` list.

- Prototype: `dlistint_t *insert_dnodeint_at_index(d

listint_t **h, unsigned int idx, int n);`
- Return: the address of the new node, or NULL if it failed

### 8. Delete at Index (`8-delete_dnodeint.c`)

Write a function that deletes the node at index index of a `dlistint_t` linked list.

- Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
- Return: 1 if it succeeded, -1 if it failed

### 9. Crackme4 (`100-password`)

Find the password for crackme4.

- Save the password in the file `100-password`
- Your file should contain the exact password, no new line, no extra space

### 10. Palindromes (`102-result`)

Find the largest palindrome made from the product of two 3-digit numbers.

- Save the result in the file `102-result`
- Your file should contain the exact result, no new line, no extra space

### 11. Crackme5 (`103-keygen.c`)

Write a keygen for crackme5.

- Usage of the crackme: `./crackme5 username key`
- The crackme will segfault if you do not enter the correct key for the user
- Usage for your keygen: `./keygen5 username`
- Your keygen should print a valid key for the username

