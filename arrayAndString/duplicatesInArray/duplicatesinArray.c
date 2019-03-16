#include "stdio.h"
#include "stdint.h"

#define ENABLE_DEBUG 0

void sortArray(int* a, int len)
{

}

void duplicatesInArraySorting(int *a, int len)
{
  int num = -1;
  if (ENABLE_DEBUG)
  {
    printf("len = %d\r\n", len);
  }

  if (a == NULL || len == 1)
  {
    printf("invalid array");
    return;
  }

  sortArray(a, len);

  for (int i = 0; i < len - 1; i++)
  {
    if (a[i] == a[i + 1])
    {
      if (a[i + 1] == num)
      {
        continue;
      }
      else
      {
        printf("%d ", a[i + 1]);
        num = a[i + 1];
      }
    }
  }
  if (num == -1)
  {
    printf("No Duplicates");
  }
}

void duplicatesInArrayHashMap(int* a, int len);

int main()
{
  //Test Cases
  int a[] = {1,1,3,5,8,8,12,15,19,19}; //Standard case sorted
  int a[] = {1,5,18,2,8,1,12,9,7,5}; //Standard case unsorted
  //int a[] = {1,1,1,1,1}; //All duplicates
  //int a[] = {1,2,3,4,5,6}; //No duplicates
  //int a[] = {1,2,2,2,5,6}; //3 continues duplicates
  //int a[] = {1}; //Just one element
  int len = sizeof(a) / sizeof(a[0]);
  duplicatesInArraySorting(a, len);
}