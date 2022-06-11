# Sorting algorithms & Big O

## Language
![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

name of the project → ****0x1B. C - Sorting algorithms & Big O****
<br>
authors ->[Mateo Arbini](https://github.com/MateoArbini)
        -> [Santiago Neira](https://github.com/sanei1509)

## Background Context
this project is destined to be in pairs, we must program it both

**These are the concept that we wiil see:**

## Learning Objectives

At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/bUxwUIRhI1ehqqr1UF3HaA "explain to anyone"),  **without the help of Google**:

### General

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

##More Info
Data Structure and Functions used

````c
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
````

``print_array``, and ``print_list`` functions:

To print the elements worked in the algorithm with ``ARRAY``
````c
/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
````
To print the elements worked in the algorithm with ``LISTS``
````c
/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
````

## Authors

[Mateo Arbini](https://github.com/MateoArbini)
<br>
[Santiago Neira](https://github.com/sanei1509)
