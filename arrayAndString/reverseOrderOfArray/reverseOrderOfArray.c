#include "../../main/main.h"

void printArray(int arr[], int size)
{
    if(size > 0)
        printf("[");
    else
        printf("[ ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\b]\r\n");
}


void reverseArray(int arr[], int size)
{
    int tmp, start = 0, end = size - 1;

    if(size <= 0)
    {
        printf("Empty / Invalid Array\r\n");
        return;
    }

    while(start < end)
    {
        tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        start++;
        end--;
    }
}


void testReverseArray()
{
    int arr[] = {1, 2, 3, 4, 5}; //Normal Case - 1
    //int arr[] = {1, 2, 3}; //Normal Case - 2
    //int arr[] = {1, 2}; //Normal Case - 3
    //int arr[] = {1}; // Base case
    //int arr[] = {}; // Empty Arr
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array---------\r\n");
    printArray(arr, size);
    reverseArray(arr, size);
    printf("Reversed Array---------\r\n");
    printArray(arr, size);
}
