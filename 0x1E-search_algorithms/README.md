# 0x1E. C - Search Algorithms

### Resources to read or watch:

[Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
[Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)

### General knowledge

- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs

These formats are used for the big O notations

- O(1)
- O(n)
- O(n!)
- n\*m -> O(nm)
- n square -> O(n^2)
- sqrt n -> O(sqrt(n))
- log(n) -> O(log(n))
- n \* log(n) -> O(nlog(n))

### [0. Linear search](0-linear.c)

Write a function that searches for a value in an array of integers using the Linear search algorithm

- Prototype : `int linear_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

```bash
wilfried@0x1E-search_algorithms$ cat 0-main.c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
wilfried@0x1E-search_algorithms$ ./0-linear
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
```

### [1. Binary search](1-binary.c)

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm

- Prototype : `int binary_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the index where `value` is located
- You can assume that `array` will be sorted in ascending order
- You can assume that `value` won’t appear more than once in array
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)

```C
wilfried@0x1E-search_algorithms$ cat 1-main.c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary
wilfried@0x1E-search_algorithms$ ./1-binary
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
```

### [2. Big O #0](2-O)

What is the `time complexity` (worst case) of a linear search in an array of size `n`?

### [3. Big O #1](3-O)

What is the `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`?

### [4. Big O #2](4-O)

What is the `time complexity` (worst case) of a binary search in an array of size `n`?

### [5. Big O #3](5-O)

What is the space complexity (worst case) of a binary search in an array of size n?

### [6. Big O #4](6-O)

What is the `space complexity` of this function / algorithm?

```bash
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

### [7. Jump search](100-jump.c)

Write a function that searches for a value in a sorted array of integers using the [Jump search algorithm](https://en.wikipedia.org/wiki/Jump_search)

- Prototype : `int jump_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in array
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- You can assume that `array` will be sorted in ascending order
- If `value` is not present in array or if array is NULL, your function must return -1
- You have to use the square root of the size of the array as the jump step.
- You can use the `sqrt()` function included in `<math.h>` (don’t forget to compile with -lm)

### [8. Big O #5](101-O)

What is the `time complexity` (average case) of a jump search in an array of size `n`, using s`tep = sqrt(n)`?

### [9. Interpolation search](102-interpolation.c)

Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm

- Prototype : `int interpolation_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in array
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- You can assume that arr`ay will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- To determine the probe position, you can use : `size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))`

### [10. Exponential search](103-exponential.c)

Write a function that searches for a value in a sorted array of integers using the [Exponential search algorithm](https://en.wikipedia.org/wiki/Exponential_search)

- Prototype : `int exponential_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in array
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- You can assume that `array` will be sorted in ascending order
- If `value` is not present in `array` or if `array` is NUL`L, your function must return `-1`
- You have to use powers of 2 as exponential ranges to search in your array
- Every time you compare a value in the array to the value you are searching for, you have to print this value (See example)
- Once you’ve found the good range, you need to use a binary search:
- Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)

### [11. Advanced binary search](104-advanced_binary.c)

You may have noticed that the basic binary search does not necessarily return the index of the _first_ value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem.

Write a function that searches for a value in a sorted array of integers.

- Prototype : `int advanced_binary(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in array
- And `value` is the value to search for
- Your function must return the index where `value` is located
- You can assume that array will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)
- You have to use recursion. You may only use one loop (`while`, `for`, `do while`, etc.) in order to print the array

### [12. Jump search in a singly linked list](105-jump_list.c)

You might think that linear search is not as effective as any other algorithm, right? Well, we should see what happens with a singly linked list.

Write a function that searches for a value in a sorted list of integers using the Jump search algorithm.

- Prototype : `listint_t *jump_list(listint_t *list, size_t size, int value);`
- Where `list` is a pointer to the head of the list to search in
- `size` is the number of nodes in list
- And `value` is the value to search for
- Your function must return a pointer to the first node where `value` is located
- You can assume that `list` will be sorted in ascending order
- If `value` is not present in `head` or if `head` is `NULL`, your function must return `NULL`
- You have to use the square root of the size of the list as the jump step.
- You can use the `sqrt()` function included in `<math.h>` (don’t forget to compile with -lm)
- Every time you compare a value in the list to the value you are searching, you have to print this value (see example)
- NOTE: [You can find here](https://github.com/alx-tools/0x1D.c/tree/master/listint) the functions used in the example.

### [13. Linear search in a skip list](106-linear.c)

As you see now, looking for a specific value in a singly linked list always leads to browse every element of the list. A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an “express lane” to browse it. A linked list with an express lane is called a [skip list](https://en.wikipedia.org/wiki/Skip_list). This change does not come without consequences. Indeed, the space complexity of a search in this kind of list will grow as `sizeof(skiplist_t) > sizeof(listint_t)` (see example below).

Write a function that searches for a value in a sorted skip list of integers.

- Prototype : `skiplist_t *linear_skip(skiplist_t *list, int value);`
- Where `list` is a pointer to the head of the skip list to search in
- A node of the express lane is placed every index which is a multiple of the square root of the size of the list (see example below)
- And `value` is the value to search for
- You can assume that `list` will be sorted in ascending order
- Your function must return a pointer on the first node where value is located
- If `value` is not present in `list` or if `head` is NU`LL, your function must return `NULL`

### [14. Big O #6](107-O)

#advanced
Score: 0.0% (Checks completed: 0.0%)
What is the time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)?

### [15. Big O #7](108-O)

What is the `time complexity` (average case) of a jump search in a skip list of size `n`, with an express lane using `step = sqrt(n)`?
