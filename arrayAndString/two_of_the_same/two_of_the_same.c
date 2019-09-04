#include <stdio.h>


void print_array(int *arr, int size)
{
  for(int i =0; i< size ; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\r\n");
}

/**
 * @brief 
Given an array of numbers, replace each even number with two
of the same number. e.g, [1,2,5,6,8, , , ,] -> [1,2,2,5,6,6,8,8].
Assume that the array has the exact amount of space to accommodate the result.
Questions to Clarify:
Q. How do you want to return the result?
A. Modify the input array.
Q. What would an empty element contain?
A. -1

Solution:
We use reverse traversal. We keep 2 pointers, one that loops through the existing numbers,
and one that keeps track of the end. When we encounter an even number, we move two instances
of it to the end. When we encounter an odd number, we move only one instance to the end.

Pseudocode:
end = a.length - 1
current -> getLastNumber(a) to 0
   if even, copy value to end, decrease end, do this twice
   if odd, copy value to end, decrease end

Test Cases:
Corner Cases - null, empty array, array with only blanks
Base Cases - one odd number, one even number
Regular Cases - only odd numbers, only even numbers, both odd and even numbers

Time Complexity: O(n) aka linear time
Space Complexity: O(1) aka constant space
 */
void two_of_the_same(int *input_array, int size)
{
  int end = size -1;

  if(!input_array || size <=0)
  {
    return;
  }

  for(int i =size-1; i>= 0; i--)
  {
    if((input_array[i] != -1) && (input_array[i] % 2 == 0))
    {
      input_array[end] = input_array[i];
      end--;
      input_array[end] = input_array[i];
      end--;
    }
    else if((input_array[i] != -1) && (input_array[i] % 2 != 0))
    {
      input_array[end] = input_array[i];
      end--;
    }
  }
  print_array(input_array, size);
}

int main()
{
  //int a[] = {1,2,5,6,8,-1,-1,-1};
  int a[] = {1,2,5,6,8,-1,-1,-1};
  //int a[] = {-1,-1,-1,-1,-1,-1,-1,-1};
  //int a[] = {2,-1};
  //int a[] = {0};
  //int a[] = {2,2,6,6,8,-1,-1,-1,-1,-1};
  //int a[] = {1,1,1,1,1};
  int size = sizeof(a)/sizeof(a[0]); 
  printf("Move Two of the same to the end problem\r\n");
  print_array(a,size);
  two_of_the_same(a,size);
}