#include "../../main/main.h"

void sortedContinuesSubArrary(int arr[], int size)
{
  int i = arr[0], j = arr[size - 1], min = INT_MAX, max = INT_MIN;

  if (size <= 0)
  {
    printf("NULL / Invalid array\r\n");
    return;
  }

  //Find the first bump
  for (i = 0; i < size - 1; i++)
  {
    if (arr[i + 1] < arr[i])
      break;
  }

  //Find the first dip
  for (j = size - 1; j > 0; j--)
  {
    if (arr[j - 1] > arr[j])
      break;
  }

  //No dip or bump
  if(i>= size -1 || j <= 0)
  {
    printf("[NULL] Already sorted\r\n");
    return;
  }

  //Min max between a[i,j]
  for(int k =i; k<=j; k++)
  {
    if(arr[k] > max)
      max = arr[k];

     if(arr[k] < min)
      min = arr[k];
  }

    //expand i and j outward
    while (i > 0 && arr[i - 1] > min)
    {
        i--;
    }

    while (j < (size - 1) && arr[j + 1] < max)
    {
        j++;
    }

  printf("indices: [%d,%d]\r\n", i, j);
  printf("Subarray: [");
  for(int k = i; k<j;k++)
  {
    printf("%d ",arr[k]);
  }
  printf("\b]\r\n");

}

void testSortedContinuesSubArrary()
{
  //int arr[] = {1, 2, 3, 4, 5, 6};
  int arr[] = {0, 2, 5, 3, 1, 8, 6, 9};
  //int arr[] = {};
  //int arr[] = {1};
  int size = sizeof(arr) / sizeof(arr[0]);
  printArray(arr,size);
  sortedContinuesSubArrary(arr, size);
}
