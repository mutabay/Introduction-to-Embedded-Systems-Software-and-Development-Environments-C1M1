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
 * @brief Header file of the statistical analytics program.
 *
 * stats program analyze an array of unsigned char data items and report analytics on the maximum, 
 * minimum, mean, and median of the data set. In addition, it will reorder this data set from large to small.
 * All statistics should be rounded down to the nearest integer. After analysis and sorting is done, it will 
 * print that data to the screen in nicely formatted presentation. 

 *
 * @author Mustafa Tayyip BAYRAM
 * @date 19.09.2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


void print_array( unsigned char * data , int dataLength );

/**
 * @brief Prints data array 
 *
 * Given an array of data and a length, prints the array to the screen.
 * Function uses a loop and prints the array.
 *
 * @param unsigned char * data - Input is the data array 
 * @param int dataLength  - Input is length of the data array

 * @return Nothing. Because does not have to return anything. It just print an array.
 */



int find_median( unsigned char * sortedData , int dataLength );

/**
 * @brief Finds data's median value.
 *
 * Given an sorted array of data and a length, returns the median value
 * Function takes sorted data. If data length is odd number then median 
 * is in the middle of sorted array. If data length is not odd then 
 * median is the mean of middle data. 
 *
 * @param unsigned char * data - Input is the data array 
 * @param int dataLength  - Input is length of the data array

 * @return Median value which is integer type(Rounded value).
 */
                                         



int find_mean( unsigned char * data , int dataLength );

/**
 * @brief Finds data's mean value.
 *
 * Given an array of data and a length, returns the mean.
 * Mean is the sum of data divided the data length.
 *
 * @param unsigned char * data - Input is the data array 
 * @param int dataLength  - Input is length of the data array

 * @return Mean which is integer type(Rounded value).
 */
                                         



int find_maximum( unsigned char * data , int dataLength );
/**
 * @brief Finds the maximum value in the data.
 *
 *  Given an array of data and a length, returns the maximum.
 *	For find the maximum value we will use the linear search.
 *
 * @param unsigned char * data - Input is the data array 
 * @param int dataLength  - Input is length of the data array

 * @return Maximum value which is integer type.
 */




int find_minimum( unsigned char * data , int dataLength );
/**
 * @brief Finds the minimum value in the data.
 *
 *  Given an array of data and a length, returns the minimum.
 *  For find the minimum value we will use the linear search.
 *
 * @param unsigned char * data - Input is the data array 
 * @param int dataLength  - Input is length of the data array

 * @return Minimum value which is integer type.
 */



unsigned char * sort_array( unsigned char * data , int dataLength );
/**
 * @brief Sorts largest to smalleset.
 *
 *  Given an array of data and a length, sorts the array from largest 
 *  to smallest. (The zeroth Element should be the largest value, 
 *  and the last element (n-1) should be the smallest value. )
 *	We will use buble sort method.
 *
 * @param unsigned char * data - Input is the data array 
 * @param int dataLength  - Input is length of the data array

 * @return Array which is sorted and unsigned char type.
 */
#endif /* __STATS_H__ */
