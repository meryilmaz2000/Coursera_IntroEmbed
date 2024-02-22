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
 * @brief source file
 *
 * General code file of stats lib (v2)
 *
 * @author Melikşah Eryılmaz
 * @date 02.22.2024 
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

//Function declarations
void main();
void print_statistics(unsigned char* ptr, unsigned int size);
void print_array(unsigned char* ptr, unsigned int size);
unsigned char find_median(unsigned char* ptr, unsigned int size);
unsigned char find_mean(unsigned char* ptr, unsigned int size);
unsigned char find_maximum(unsigned char* ptr, unsigned int size);
unsigned char find_minimum(unsigned char* ptr, unsigned int size);
void sort_array(unsigned char* ptr, unsigned int size);

//Main function
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char *arr_ptr = &test[0]; //first index address of test array
 
  /* Statistics and Printing Functions Go Here */
  printf("Called print_array func. :\n");
  print_array(arr_ptr,SIZE);
  printf("\nCalled sort_array func. then print_array:\n");
  sort_array(arr_ptr,SIZE);
  print_array(arr_ptr,SIZE);
  printf("\nCalled print_statistics func. :\n");
  print_statistics(arr_ptr,SIZE);//In this func. we need to use other implemented functions.
}

/* Add other Implementation File Code Here */
//Functions
void print_statistics(unsigned char* ptr, unsigned int size){
  unsigned int max,min,mean,median;
  max = find_maximum(ptr,size);
  min = find_minimum(ptr,size);
  mean = find_mean(ptr,size);
  median = find_median(ptr,size);
  printf("Maximum : %d\nMinimum : %d\nMean : %d\nMedian : %d\n",max,min,mean,median);
}

void print_array(unsigned char* ptr, unsigned int size){
  for(int i = 0 ; i < size ; i++){
    printf("%2d.element : %3d\n",i+1,*(ptr+i));
  }
}

unsigned char find_median(unsigned char* ptr, unsigned int size){
  sort_array(ptr,size);
  unsigned char median = 0;
  unsigned int position = 0;
  if( size % 2 == 0){ //If size is even ;
    position = size/2;
    median = ((*(ptr + position) + *(ptr + position - 1)))/ 2.0;
  }
  else{ //Otherwise
    position = size / 2 ;
    median = *(ptr + position);
  }
  return median;
}
unsigned char find_mean(unsigned char* ptr, unsigned int size){
  unsigned int total = 0 ;
  for(int i = 0 ; i < size ; i ++){
    total += *(ptr+i);
  }
  total = total / size;
  return total;
}

unsigned char find_maximum(unsigned char* ptr, unsigned int size){
  unsigned int max = *(ptr);
  for(int i = 0 ; i < size ; i++){
    if(max < *(ptr+i)){
      max = *(ptr+i);
    }
  }
  return max;
}

unsigned char find_minimum(unsigned char* ptr, unsigned int size){
  unsigned int min = *(ptr);
  for(int i = 0 ; i < size ; i++){
    if(min > *(ptr+i)){
      min = *(ptr+i);
    }
  }
  return min;
}

void sort_array(unsigned char* ptr, unsigned int size){
  unsigned char *min_ptr;
  unsigned char temp , minimum;
  int bound = 0;
  for(int i = 0 ; i < size; i ++){
    minimum = *ptr;
    min_ptr = ptr;
    for(int j = 0 ; j < size-i; j ++){
      if(minimum > *(ptr+j)){
	minimum = *(ptr+j);
        min_ptr = ptr+j;
      }
    }
    temp = *(ptr+size-1-bound);
    *(ptr+size-1-bound)= *min_ptr;
    *min_ptr= temp;
    bound++;
  }
}

