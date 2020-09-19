
/*
* Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief <Source file of the statistical analytics program in c programming.>
 *
 * <stats program analyze an array of unsigned char data items and report analytics on the maximum, 
 * minimum, mean, and median of the data set. In addition, it will reorder this data set from large to small.
 * All statistics should be rounded down to the nearest integer. After analysis and sorting is done, it will 
 * print that data to the screen in nicely formatted presentation. 

 * @author Mustafa Tayyip BAYRAM
 * @date 19.09.2020
 *
 */



#include <stdio.h>
#include "stats.h"


/* Size of the Data Set */
#define SIZE (40)






 


int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  
  //prints unsorted data array.
  printf("******** Array ***********\n");                                
  print_array(test ,SIZE );

  // Declaring minimum value and print it.
  unsigned char minimum = find_minimum(test ,SIZE );
  printf("%u is the minimum value in data array\n",minimum );

  // Declaring maximum value and print it.
  unsigned char maximum = find_maximum(test ,SIZE );
  printf("%u is the maximum value in data array\n",maximum );



  // Declaring mean and print it.
  unsigned char mean = find_mean(test ,SIZE );
  printf("%u is the mean in data array\n",mean );

  // Declaring mean and print it.
  unsigned char median = find_median(test ,SIZE );
  printf("%u is the median in data array\n",median );
  

  // Declaring sortedData and print it.
  printf("******* Sorted Array *********\n");
  sort_array(test ,SIZE );
  print_array(test , SIZE );

  return 0;

}
/*
/* Add other Implementation File Code Here */


void print_array( unsigned char * data , int dataLength )
{
	for (int i = 0; i < dataLength; ++i)
	{
		printf("%u\n",data[i] );
	}
}


unsigned char find_median( unsigned char * data , int dataLength )
{

	//For finding median, array must be sorted
	sort_array(data, dataLength);
	unsigned char median;

	int middleData = dataLength / 2 ;
	//Length of array is even ,then we have to mean of middle items.
	if( 0 == dataLength % 2 )
	{
		median = (data[middleData - 1 ] + data[middleData ] ) / 2 ;	
	}
	//Length of array is odd ,then we choose on the middle item. 
	else
	{
		median = data[middleData];
	}
	return median;
}


unsigned char find_mean( unsigned char * data , int dataLength )
{
	int sum = 0;
	for (int i = 0; i < dataLength; ++i)
	{
		sum += data[i];
	}
	return ( sum / dataLength);
}


unsigned find_maximum( unsigned char * data , int dataLength )
{
	unsigned char maximum = data[0];

	for (int i = 1; i < dataLength; ++i)
	{
		if (maximum < data[i])
		{
			maximum = data[i];
		}
	}
	return maximum;
}

unsigned char find_minimum( unsigned char * data , int dataLength )
{
	unsigned char minimum = data[0];

	for (int i = 1; i < dataLength; ++i)
	{
		if (minimum > data[i])
		{
			minimum = data[i];
		}
	}
	return minimum;

}

void swap( unsigned char * firstItem , unsigned char * secondItem )
{
	unsigned char temp = *firstItem;
	*firstItem = *secondItem;
	*secondItem = temp;
}

// A function to implement bubble sort 
void sort_array( unsigned char * data , int dataLength )
{
   int i, j; 
   int flag; 
   for (i = 0; i < dataLength-1; i++) 
   { 
     flag = 0; 
     for (j = 0; j < dataLength-i-1; j++) 
     { 
        if (data[j] < data[j+1]) 
        { 
           swap(&data[j], &data[j+1]); 
           flag = 1; 
        } 
     } 
  
     // IF no two elements were swapped by inner loop, then break 
     if (flag == 0) 
        break; 
   } 
}


