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
 * @file stats.h
 * @brief Contains the interface for computing the statistics of a set of
 *        small integral values in range [0, 255] that are stored in an
 *        array.
 *
 * @author Prasanna Ghali
 * @date 07/26/2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

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
void print_statistics(unsigned const char *src, unsigned int elem_cnt);

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
 * @param prefix_str Specifies a string that is printed before displaying
 *        the array elements.
 * @param postfix Specifies a string that is printed after displaying the
 *        array elements.
 *
 * @return None.
 */
void print_array(unsigned char const *src,
                 unsigned int elem_cnt,
                 char const *prefix_str,
                 char const *postfix_str);

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
unsigned char find_median(unsigned const char *src, unsigned int elem_cnt);

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
unsigned char find_mean(unsigned const char *src, unsigned int elem_cnt);

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
unsigned char find_maximum(unsigned const char *src, unsigned int elem_cnt);

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
unsigned char find_minimum(unsigned const char *src, unsigned int elem_cnt);

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
void sort_array(unsigned char *src, unsigned int elem_cnt);

#endif /* __STATS_H__ */
