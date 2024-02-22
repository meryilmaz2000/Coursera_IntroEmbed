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
 * @brief header file of stats
 *
 * Header file of stats
 *
 * @author Melikşah Eryılmaz
 * @date 02.22.2024 
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
/**
 * @brief Test function
 *     
 * @return void
 */
void main();

/**
 * @brief To print important statistics
 *
 *   A function that prints the statistics of an array 
 * including minimum, maximum, mean, and median.
 *
 * @param ptr the pointer of the first index of given array 
 * @param size size of the array 
 *
 * @return void
 */
void print_statistics(unsigned char* ptr, unsigned int size);

/**
 * @brief To print array
 *
 *   Given an array of data and a length, prints 
 * the array to the screen.
 *
 * @param ptr the pointer of the first index of given array 
 * @param size size of the array 
 *
 * @return void
 */
void print_array(unsigned char* ptr, unsigned int size);

/**
 * @brief To find median
 *
 *   Given an array of data and a length, returns the 
 * median value.
 *
 * @param ptr the pointer of the first index of given array 
 * @param size size of the array 
 *
 * @return median value
 */
unsigned char find_median(unsigned char* ptr, unsigned int size);

/**
 * @brief To find mean
 *
 *   Given an array of data and a length, returns the mean
 *
 * @param ptr the pointer of the first index of given array 
 * @param size size of the array 
 *
 * @return mean value
 */
unsigned char find_mean(unsigned char* ptr, unsigned int size);

/**
 * @brief To find median
 *
 *   Given an array of data and a length, returns the maximum
 *
 * @param ptr the pointer of the first index of given array 
 * @param size size of the array 
 *
 * @return maximum value in array
 */
unsigned char find_maximum(unsigned char* ptr, unsigned int size);

/**
 * @brief To find median
 *
 *   Given an array of data and a length, returns the minimum
 *
 * @param ptr the pointer of the first index of given array 
 * @param size size of the array 
 *
 * @return minimum value in array
 */
unsigned char find_minimum(unsigned char* ptr, unsigned int size);

/**
 * @brief To sort array (largest to smallest)
 *
 *   Given an array of data and a length, sorts the array 
 * from largest to smallest.
 *
 * @param ptr the pointer of the first index of given array 
 * @param size size of the array 
 *
 * @return void
 */
void sort_array(unsigned char* ptr, unsigned int size);


#endif /* __STATS_H__ */
