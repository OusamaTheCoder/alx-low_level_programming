# 0x0E. C - Structures, typedef

---

**Author**: `OusamaTheCoder`

This repository contains C programs related to structures and typedef in the C programming language.

## List of Tasks

### 0. Poppy (mandatory)

- **File**: `0-dog.h`
- Define a new type `struct dog` with the following elements:
  - `name`, type = `char *`
  - `age`, type = `float`
  - `owner`, type = `char *`

### 1. A dog is the only thing on earth that loves you more than you love yourself (mandatory)

- **File**: `1-init_dog.c`
- Write a function that initializes a variable of type `struct dog`.
- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad (mandatory)

- **File**: `2-print_dog.c`
- Write a function that prints a `struct dog`.
- Prototype: `void print_dog(struct dog *d);`
- Format: See example in the task description.
- You are allowed to use the standard library.
- If an element of `d` is NULL, print `(nil)` instead of this element. (if name is NULL, print `Name: (nil)`)
- If `d` is NULL, print nothing.

### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read (mandatory)

- **File**: `3-dog.h`
- Define a new type `dog_t` as a new name for the type `struct dog`.

### 4. A door is what a dog is perpetually on the wrong side of (mandatory)

- **File**: `4-new_dog.c`
- Write a function that creates a new dog.
- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
- You have to store a copy of `name` and `owner`.
- Return NULL if the function fails.

### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg (mandatory)

- **File**: `5-free_dog.c`
- Write a function that frees dogs.
- Prototype: `void free_dog(dog_t *d);`

Enjoy exploring these C programs related to structures and typedef!

---

