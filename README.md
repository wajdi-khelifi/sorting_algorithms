# 0x1B. C - Sorting algorithms & Big O

This project is a collection of C tasks focused on teaching you the sorting algorithms and big O and improving your C programming skills. Each task has specific learning objectives and requirements to fulfill.

## Table of contents

- Project Information
- Learning Objectives
- Background Context
- Resources
- Requirements
- Tasks
- Author

## Project Information

- Author: Alexandre Gautie
- Weight: 2
- Project Start Date: Nov 15, 2023 4:00 AM
- Project End Date: Nov 22, 2023 4:00 AM
- Checker Released: Nov 16, 2023 10:00 PM
- Auto Review Will Be Launched at the Deadline

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## Background Context
This project is meant to be done by groups of two students. Each group of two should pair program for at least the mandatory part

## Resources
Read or watch:
- [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
- [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
- [15 sorting algorithms in 6 minutes(WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms](https://www.youtube.com/watch?v=kPRA0W1kECg)
- [CS50 Algorithms explanation in detail by David Malan](https://www.youtube.com/watch?v=yb0PY3LX2x8&t=2s)
- [All about sorting algorithms](https://www.geeksforgeeks.org/sorting-algorithms/)

## Requirements
### C Scripts
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called sort.h
- Don’t forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2

## Tasks
### Maindatory

1. [Bubble sort](./0-bubble_sort.c)
2. [Insertion sort](./1-insertion_sort_list.c)
3. [Selection sort](./2-selection_sort.c)
4. [Quick sort](./3-quick_sort.c)

### Advanced

1. [Shell sort - Knuth Sequence](./100-shell_sort.c)
2. [Cocktail shaker sort](./101-cocktail_sort_list.c)
3. [Counting sort](./102-counting_sort.c)
4. [Merge sort](./103-merge_sort.c)
5. [Heap sort](./104-heap_sort.c)
6. [Radix sort](./105-radix_sort.c)
7. [Bitonic sort](./106-bitonic_sort.c)
8. [Quick Sort - Hoare Partition scheme](./107-quick_sort_hoare.c)
9. [Dealer](./1000-sort_deck.c)
   [Dealer header](./deck.h)

## Auther
- Author: wajdi khelifi & seif ben othman
- Email: khelifi_wajdi@hotmail.com - 
- GitHub: [wajdi khelifi](https://github.com/wajdi-khelifi) & [seif ben othman](https://github.com/seifbenothman)

## More information
### Data Structure and Functions
- For this project you are given the following print_array, and print_list functions:
- print array function:

#include <stdlib.h>
#include <stdio.h>

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


- print list function:

#include <stdio.h>
#include "sort.h"

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

- Please use the following data structure for doubly linked list:

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
