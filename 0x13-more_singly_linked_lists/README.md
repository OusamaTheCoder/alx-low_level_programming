---
# 0x13. Doubly Linked Lists
---

## C Programming - Doubly Linked Lists

**Author**: `OusamaTheCoder`

This repository contains C programs that illustrate the concepts of doubly linked lists in the C programming language. Doubly linked lists are an extension of singly linked lists, where each element in the list has pointers to both the next and the previous elements, offering enhanced functionality for various applications.

## Description

A doubly linked list is a data structure that consists of a collection of nodes. Each node in the list contains both data and two pointers, one pointing to the next node in the list and another pointing to the previous node. This bidirectional linking allows for efficient traversal in both directions, making it suitable for a wide range of applications.

# Singly Linked List Operations

This repository contains a collection of functions for performing various operations on singly linked lists in C. These functions are part of the ALX Low-Level Programming curriculum.

## Table of Contents
1. [Print List](#1-print-list)
2. [List Length](#2-list-length)
3. [Add Node](#3-add-node)
4. [Add Node at the End](#4-add-node-at-the-end)
5. [Free List](#5-free-list)
6. [Free List (with double pointer)](#6-free-list-with-double-pointer)
7. [Pop](#7-pop)
8. [Get Node at Index](#8-get-node-at-index)
9. [Sum List](#9-sum-list)
10. [Insert Node at Index](#10-insert-node-at-index)
11. [Delete Node at Index](#11-delete-node-at-index)
12. [Reverse List](#12-reverse-list)
13. [Print List (Safe Version)](#13-print-list-safe-version)

## 1. Print List
### Function Signature:
```c
size_t print_listint(const listint_t *h);
```
This function prints all the elements of a listint_t list and returns the number of nodes.

## 2. List Length
### Function Signature:
```c
size_t listint_len(const listint_t *h);
```
This function returns the number of elements in a linked listint_t list.

## 3. Add Node
### Function Signature:
```c
listint_t *add_nodeint(listint_t **head, const int n);
```
This function adds a new node at the beginning of a listint_t list and returns the address of the new element.

## 4. Add Node at the End
### Function Signature:
```c
listint_t *add_nodeint_end(listint_t **head, const int n);
```
This function adds a new node at the end of a listint_t list and returns the address of the new element.

## 5. Free List
### Function Signature:
```c
void free_listint(listint_t *head);
```
This function frees a listint_t list.

## 6. Free List (with Double Pointer)
### Function Signature:
```c
void free_listint2(listint_t **head);
```
This function frees a listint_t list and sets the head to NULL.

## 7. Pop
### Function Signature:
```c
int pop_listint(listint_t **head);
```
This function deletes the head node of a listint_t linked list and returns the head node's data (n).

## 8. Get Node at Index
### Function Signature:
```c
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
```
This function returns the nth node of a listint_t linked list, starting at index 0.

## 9. Sum List
### Function Signature:
```c
int sum_listint(listint_t *head);
```
This function returns the sum of all the data (n) in a listint_t linked list.

## 10. Insert Node at Index
### Function Signature:
```c
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
```
This function inserts a new node at a given position in the list and returns the address of the new node.

## 11. Delete Node at Index
### Function Signature:
```c
int delete_nodeint_at_index(listint_t **head, unsigned int index);
```
This function deletes the node at the specified index in a listint_t linked list.

## 12. Reverse List
### Function Signature:
```c
listint_t *reverse_listint(listint_t **head);
```
This function reverses a listint_t linked list.

## 13. Print List (Safe Version)
### Function Signature:
```c
size_t print_listint_safe(const listint_t *head);
```
This function prints a listint_t linked list safely and returns the number of nodes.

---
Enjoy exploring these C programs related to variadic functions!

---
Happy coding!
---


