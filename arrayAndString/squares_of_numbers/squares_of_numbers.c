#include <stdio.h>
#include <stdlib.h>

void print_array(int *input_array, int size)
{
  for(int i =0; i< size; i++)
  {
    printf("%d ",input_array[i]);
  }
  printf("\r\n");
}

/**
 * @brief 
 * Given a sorted array in non-decreasing order, return an array of squares of each number, also in non-decreasing order. For example:
    [-4,-2,-1,0,3,5] -> [0,1,4,9,16,25]

    Q. +ve and -ve numbers both
    A. Yes
    Q. New array?
    A. both - if in place, time complexity will increase, just square and then sort, O(nlogn)
    A. if we can have a new array, space and time complexity will be O(n)
    Q. O(n)
    A. Yes
 * @param input_Array - sorted array
 * @param size 
 */
void square_of_numbers(int *input_array, int size)
{
  int positive = 0, negative = 0, k=0;

  if(!input_array || size <= 0)
  {
    printf("invalid Input\r\n");
    return;
  }

  int *out_array = (int *)malloc(sizeof(input_array)*size);

  //find the 0th number, ie. the first positive number.
  //and set the positive and negative indexes.
  while(positive < size -1 )
  {
    if(input_array[positive] >= 0)
    {
      break;
    }
    positive++;
  }
  negative = positive -1;
  
  // compare the positive and negative number, add the higher square to out array.
  while(negative >= 0 && positive < size)
  {
    if(abs(input_array[positive]) < abs(input_array[negative]))
    {
      out_array[k++] = input_array[positive] * input_array[positive];
      positive++; 
    }
    else
    {
      out_array[k++] = input_array[negative] * input_array[negative];
      negative--; 
    }
  }

  //add the remaining numbers
  while(positive < size)
  {
    out_array[k++] = input_array[positive] * input_array[positive];
    positive++;
  }

  while(negative >= 0)
  {
    out_array[k++] = input_array[negative] * input_array[negative];
    negative--;
  }

  print_array(out_array, size);

}

int main()
{
  int arr[] = {-4, -2, -1, 0, 3, 5};
  int size = sizeof(arr)/sizeof(arr[0]);
  print_array(arr,size);
  square_of_numbers(arr,size);
}