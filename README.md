# Project: sorting_algorithms
This project is part of the Holberton School curriculum.

In this project you will find the files with solved cases to understand sorting algorithm, Big O notation

## Objectives
* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm

## Requirements
* All files will be compiled on Ubuntu 14.04 LTS
* Programs and functions will be compiled with gcc 4.8.4 using the flags -Wall - Werror -Wextra and -pedantic
* All files should end with a new line
* It is not allowed to use global variables
* No more than 5 functions per file
* It is allowed to use the C standard library.
* The prototypes of all the functions should be included in the header file called sort.h
* A list/array does not need to be sorted if its size is less than 2
* Write in the file [#]-O, the big O notations of the time complexity of the sort algorithm, with 1 notation per line:
	* in the best case
	* in the average casee
	* in the worst case

## Data Structure and Functions
* For this project you are given the following print_array, and print_list functions: print_array.c, print_list.c

## Compilation

Your code will be compiled this way:

gcc -Wall - Werror -Wextra and -pedantic [main file name].c [function file name].c -o [object file name]

## Execution

./[object file name]

## Examples

gcc -Wall - Werror -Wextra and -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble

./bubble

## File - Functions

* sort.h - header file
* 0-bubble_sort.c: function that sorts an array of integers in ascending order using the Bubble sort algorithm
* 0-O: the big O notations of the time complexity of the Bubble sort algorithm
* 1-insertion_sort_list.c: function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
* 1-O: the big O notations of the time complexity of the Insertion sort algorithm
* 2-selection_sort.c: function that sorts an array of integers in ascending order using the Selection sort algorithm
* 2-O: the big O notations of the time complexity of the Selection sort algorithm
* 3-quick_sort.c: function that sorts an array of integers in ascending order using the Quick sort algorithm
* 3-O: the big O notations of the time complexity of the Quick sort algorithm

## Authors
* Melisa Rojas

