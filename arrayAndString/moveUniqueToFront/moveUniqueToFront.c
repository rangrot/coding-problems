#include <stdio.h>

// To execute C, please define "int main()"

// repeating elements are consecutive
int *unique_to_front(int * a, int size)
{
  if(!a || size<=0)
    return 0;
  int tmp = 0, count =0;
  // Loop over the array one by one
  for(int i =0; i< size -1; i++)
  {
    //store the i+1 value in a tmp
    tmp =a[i+1];
    count =0;
    //if the elements is repeating 
    // shift the whole array to left by 1
    // and switch the last element with tmp
    // count keeps the below operation in going in
    // an infinite loop
    while(a[i] == a[i+1])
    { 
      if(count > size)
        break;
      
      for(int j =i+1;j < size-1; j++ )
      {
        a[j] = a[j+1];
      }
      a[size-1] = tmp;
      count++;
    }
  }
  return a;
}

int main() {

  //int arr[13] = {1,1,3,3,5,6,7,2,2,2,9,10,10}; //Test Case 1- Normal condition
  //int arr[13] = {1,1,1,1,5,5,5,2,2,2,9,-1,3}; // TC-2 more than 3 duplicate numbers
   //int arr[13] = {1,1,1,1,1,1,1,1,1,1,2,2,2};// TC-3 2 sets all duplicates
  //int arr[13] = {1,1,1,1,1,1,1,1,1,1,1,1,1}; // TC-4 all duplicates
  //int arr[] = {}; // TC-5 Empty Array
  int arr[13] = {13,12,11,10,9,8,7,6,5,4,3,2,1};// TC-6 No duplicates
  int *return_arr = unique_to_front(arr,13);
  
   for(int i =0; i< 13; i++)
   {
     printf("%d ",*(return_arr+i));
   }
  return 0;
}

//a[] = {1,1,3,3,5,6,7,2,2,2,9,10,10}
//a_out[] = {1,3,5,6,7,2,9,10,1,3,2,2,10}