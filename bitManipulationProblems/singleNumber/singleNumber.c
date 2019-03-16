#include "stdio.h"

/**
 * @brief Returns the single non-duplicated integer from an integer array
 * 
 * @param arr: integer array, can be any lenght
 * @param size: size of the integer array
 * @return int: integer array of any length with all the elements with exactly 1 duplicate of itself, and a single non duplicate element.
 */
int singleNumber(int* arr, int size)
{
  int res = arr[0];
  for (int i = 1; i < size; i++)
  {
    res ^= arr[i];
  }
  return res;
}

int main()
{
  int size;
  int arr[] = {1, 3, 7, 5, 1, 7, 3, 2, 8, 2, 5};
  size = sizeof(arr) / sizeof(arr[0]);
  printf("Single Number is = %d\r\n", singleNumber(arr, size));
}