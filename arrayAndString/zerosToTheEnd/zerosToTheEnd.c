#include "../../main/main.h"

void zerosToTheEnd(int arr[], int size)
{

  if (size <= 0)
  {
    printf("Invalid/Empty array\r\n");
    return;
  }

  //Keep a count of non zero numbers
  int count = 0;

  //iterate through the array
  //if the number is non zero store it at the index count
  for(int i= 0; i< size; i++)
  {
    if(arr[i] != 0)
    {
      arr[count++] = arr[i];
    }
  }

  //by now all the non zero numbers have been stored at correct places
  //make the numbers from the count index till size 0
  while( count < size)
  {
    arr[count++] = 0;
  }
  printArray(arr, size);
}


void zerosToTheFront(int arr[], int size)
{
   if (size <= 0)
  {
    printf("Invalid/Empty array\r\n");
    return;
  }

  int count = size -1; //count of non zero numbers.

  //iterate through the end of array
  // for non zero numbers put them at the index count.
  for (int i = size-1; i>= 0; i--)
  {
    if(arr[i] != 0)
    {
      arr[count--] = arr[i];
    }
  }

  // make the numbers from 0 to count as 0
  while(count >= 0)
  {
    arr[count--] = 0;
  }

  printArray(arr, size);

}

void testZerosToTheEnd()
{
  int arr[] = {1, 9, 8, 4, 0, 0, 2, 0, 7, 0, 6, 0};
  //int arr[] = {};
  //int arr[] = {0};
  //int arr[] = {1};
  //int arr[] = {0, 0, 0, 0, 0, 0};
  //int arr[] = {1, 9, 8, 4, 7, 5, 2};
  //int arr[] = {1, 9, 8, 4, 5, 7, 2, 0, 0, 0, 0, 0};
  //int arr[] = {0, 0, 0, 0, 0, 1, 9, 8, 4, 5, 7, 2};
  int size = sizeof(arr) / sizeof(arr[0]);
  printArray(arr, size);
  printf("Zeroes to end\r\n");
  zerosToTheEnd(arr, size);
  printf("Zeroes to front\r\n");
  zerosToTheFront(arr, size);
}
