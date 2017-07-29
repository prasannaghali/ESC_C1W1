/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementation of interface declared in stats.h
 *
 * This file contains the implementation of the interface declared in stats.h
 * plus the driver function main() to test this implementation. The interface
 * described in stats.h consists of the following functions:
 *
 * 1) print_statistics() - a function that prints statistics of an array
 * of integral values including the minimum, maximum, mean and median values.
 *
 * 2) print_array() - prints an input array to console
 *
 * 3) find_median() - returns median of input array of integral values
 *
 * 4) find_mean() - returns mean value of input array of integral values
 *
 * 5) find_maximum() - returns maximum value of input array of integral values
 *
 * 6) find_minimum() - returns minimum value of input array of integral values
 *
 * 7) sort_array() - sorts in descending order an input array of integral
 * values
 *
 * @author Prasanna Ghali
 * @date 07/26/2017
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/*
ANSI C requires that main() specify void if no parameters exist and always
returns an integer value.
*/
int main(void) {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Statistics and Printing Functions Go Here */
  print_array(test, SIZE, "Array before sorting:\n", "\n");
  print_statistics(test, SIZE);

  /* sort array and print sorted array */
  sort_array(test, SIZE);
  print_array(test, SIZE, "\nArray after sorting:\n", "\n");

  return 0;
}

/**
 * @brief print_statistics() prints the maximum, minimum, median, and mean
 * values in a read-only array of small positive integer values in range
 * [0, 255].
 *
 * This function will call helper functions find_maximum(), find_minimum(),
 * find_median() and find_mean() to compute the appropriate statistics. It
 * uses printf() - declared in <stdio.h> - to print the values to standard
 * output.
 *
 * @param src represents first element in a read-only sequence of values
 *        where each values is a small integer of type unsigned char.
 *        Note: The function does not test if the parameter is a null pointer.
 * @param elem_cnt Specifies the number of elements in sequence.
 *
 * @return None.
 */
void print_statistics(unsigned const char *src, unsigned int elem_cnt) {
   /* stub definition - details to be added ... */
}


/**
 * @brief print_array() prints the values in a read-only array of small
 *        positive integer values in range [0, 255] to standard output.
 *
 * This function prints the values in a read-only array where each
 * element of the array is a small integer of type unsigned char. This
 * function uses printf() - declared in <stdio.h> -  to print the values
 * to standard output.
 *
 * @param src represents a pointer to the 1st element in a sequence of elem_cnt
 *        number of elements where each element is a small integer of type
 *        unsigned char.
 *        Note: The function does not test if the parameter is a null pointer.
 * @param elem_cnt Specifies the number of elements in sequence.
 * @param prefix Specifies a string that is printed before displaying
 *        the array elements.
 * @param postfix Specifies a string that is printed after displaying the
 *        array elements.
 *
 * @return None.
 */
void print_array(unsigned char const *src,
                 unsigned int elem_cnt,
                 char const *prefix_str,
                 char const *postfix_str) {
   /* stub definition - details to be added ... */
}

/**
 * @brief find_median() returns the value of element lying at the midpoint
 *        of values in a read-only array of small positive integers in
 *
 * To determine the median, the function must sort the elements in the array.
 * However, since the function receives a read-only sequence of values, it must
 * first make a copy of the input sequence on the heap. The function returns
 * the dynamically allocated memory to the heap after the median is computed.
 * After sorting the array, the median is computed in one of two ways. If the
 * array contains an odd number of elements, the data value at the middle of
 * the array is returned as the median. For even number of elements, the
 * median is returned as the mean of the data values of the middle two
 * elements of the array.
 *
 * @param src represents first element in sequence of elem_cnt elements
 *        where each element is a small integer of type unsigned char.
 *        Note: The function does not test if the parameter is a null pointer.
 * @param elem_cnt Specifies the number of elements in sequence.
 *
 * @return median value in sequence of type unsigned char.
*/
unsigned char find_median(unsigned char const *src, unsigned int elem_cnt) {
  /* stub definition - details to be added ... */
  return (unsigned char) (0);
}

/**
 * @brief find_mean() returns the average value in a read-only array of
 *        small positive integers in range [0, 255].
 *
 * To prevent overflow, this function accumulates the sum of the small integers
 * in the array as a value of type unsigned int. The funas
 * a value of type unsigned int. The function does not return a floating-point
 * value. Instead, the truncated value of type unsigned char is returned.
 *
 * @param src represents first element in sequence of elem_cnt elements
 *        where each element is a small integer of type unsigned char.
 *        Note: The function does not test if the parameter is a null pointer.
 * @param elem_cnt Specifies the number of elements in sequence.
 *
 * @return average value in sequence of type unsigned char.
*/
unsigned char find_mean(unsigned char const *src, unsigned int elem_cnt) {
  /* stub definition - details to be added ... */
  return (unsigned char) (0);
}

/**
 * @brief find_maximum() returns the largest value in a read-only array of
 *        small positive integer values in range [0, 255].
 *
 * This function does not assume that the array is sorted and therefore must
 * visit every element of the array.
 *
 * @param src represents a pointer to the 1st element in a sequence of elem_cnt
 *        number of elements where each element is a small integer of type
 *        unsigned char.
 *        Note: The function does not test if the parameter is a null pointer.
 * @param elem_cnt Specifies the number of elements in sequence.
 *
 * @return largest value in sequence of type unsigned char.
 */
unsigned char find_maximum(unsigned char const *src, unsigned int elem_cnt) {
  /* stub definition - details to be added ... */
  return (unsigned char) (0);
}

/**
 * @brief find_minimum() returns the smallest value in a read-only array of
 *        small positive integer values in range [0, 255].
 *
 * This function does not assume that the array is sorted and therefore must
 * to visit every element of the array.
 *
 * @param src represents a pointer to the 1st element in a sequence of elem_cnt
 *        number of elements where each element is a small integer of type
 *        unsigned char.
 *        Note: The function does not test if the parameter is a null pointer.
 * @param elem_cnt Specifies the number of elements in sequence.
 *
 * @return smallest value in sequence of type unsigned char.
 */
unsigned char find_minimum(unsigned char const *src, unsigned int elem_cnt) {
  /* stub definition - details to be added ... */
  return (unsigned char) (0);
}

/**
 * @brief compare_values() is the comparison function required by qsort() to
 *        sort elements in descending order.
 *
 * qsort() requires that a negative value be returned if first parameter of
 * the comparison function must be to the left of the second parameter. Since
 * the array is to be sorted in descending order, compare_values() will
 * return a negative value if left parameter is larger than the right parameter.
 * Otherwise, a positive value is returned while zero is returned if both
 * parameers have the same value.
 *
 * @param left points to a element.
 * @param right points to a second element.
 *
 * @return int value -1 if value pointed to by left is larger than the
 *         element pointed to by right.
 *         Otherwise, 1 is returned if the value pointed to by
 *         left is smaller than the element pointed to by right.
 *         Otherwise, 0 is returned.
 */
int compare_values(void const *left, void const *right) {
  /* stub definition - details to be added ... */
  return 0;
}

/**
 * @brief sort_array() sorts the elements of the array in descending
          order.
 *
 * This function will call helper function q_sort() declared in
 * <stdlib.h> to implement the sort algortihm. Since q_sort()
 * requires
 *
 * @param src represents first element in a read-only sequence of values
 *        where each values is a small integer of type unsigned char.
 *        Note: The function does not test if the parameter is a null pointer.
 * @param elem_cnt Specifies the number of elements in sequence.
 *
 * @return None.
 */
void sort_array(unsigned char *src, unsigned int elem_cnt) {
  /* stub definition - details to be added ... */
}
