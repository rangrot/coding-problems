#include "../../main/main.h"

/**
 * @brief
 *  Swap two variables of an array in place.
 * @param x pointer to the element
 * @param y pointer to the second element
 */
void swapElementsInArray(int *x, int *y)
{
  int tmp;
  tmp  = *x;
  *x = *y;
  *y = tmp;
}

/**
 * @brief
 * Takes an int array and a pivot and arranges the element
 * around the pivot [< = >]
 * @param arr
 * @param size
 * @param pivot
 */
void dutchNationalFlag(int arr[], int size, int x)
{
  int low = -1, mid = -1, high = size;
  
  if (size <= 0 || x < 0 || x > size)
  {
    printf("NULL/Invalid array or invalid index\r\n");
    return;
  }

  int pivot = arr[x];

  while (mid + 1 < high)
  {
    if (arr[mid + 1] > pivot)
    {
      swapElementsInArray(&arr[high - 1], &arr[mid + 1]);
      high--;
    }
    else if (arr[mid + 1] == pivot)
    {
      mid++;
    }
    else
    {
      swapElementsInArray(&arr[mid + 1], &arr[low + 1]);
      low++;
      mid++;
    }
  }

  printArray(arr, size);
}

/**
 * @brief
 * Test function for dutchNationalFlag
 */
void testDutchNationalFlag()
{
  // int arr[] = {3, 5, 2, 6, 8, 4, 4, 6, 4, 4, 3};
  // int pivot = 6;

  // int arr[] = {9,9,9,5,5,5,2,2,2};
  // int pivot = 6;

  // int arr[] = {3};
  // int pivot = 6;

   int arr[] = {3, 5, 2};
   int pivot = 1;

   //  int arr[] = {3, 5};
   //  int pivot = 6;
   //  int pivot = 1;

  // int arr[] = {};
  // int pivot = 0;
  // int pivot = 6;

  // int arr[] = {9,8,7,5,4,3,2,1};
  // int pivot = 4;

  int size = sizeof(arr) / sizeof(arr[0]);
  printArray(arr, size);
  dutchNationalFlag(arr, size, pivot);
}
