#include "../../main/main.h"

void twoSumProblemSortedArrary(int arr[], int size, int X)
{
  int start = arr[0], end = size - 1, sum;

  if(size <= 0)
  {
    printf("Invalid / NULL arrary\r\n");
    return;
  }

  while(start < end)
  {
    sum = arr[start] + arr[end];

    if(sum > X)
    {
      end--;
    }
    else if(sum < X)
    {

      start++;
    }
    else
    {
      printf("Indices: [%d,%d]\r\n",start,end);
      printf("Values: [%d,%d] | X = %d\r\n",arr[start],arr[end], X);
      return;
    }

  }
  printf("[NULL]\r\n");
}

void testTwoSumProblem()
{

  //int arr[] = {1, 2, 3, 4, 5, 6}; //Regular Case - 1.
  int arr[] = {1, 2, 3, 5, 5, 6}; //Regular Case - 2.
  //int arr[] = {1, 2, 3, 3, 2, 6}; //Regular Case.
  //int arr[] = {1, 1, 1, 1, 1, 1}; //Regular Case.
  //int arr[] = {1}; //Base Case.
  //int arr[] = {}; //Base Case.
  int X = 11;

  int size = sizeof(arr) / sizeof(arr[0]);

  twoSumProblemSortedArrary(arr, size, X);
}
