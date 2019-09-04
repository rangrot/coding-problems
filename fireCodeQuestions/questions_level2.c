// stdio.h, string.h have been included for this problem.
// You don't need any other header files.
//Q1

void swap(int *a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// Add any helper functions(if needed) above.
int* selection_sort_array(int arr[], int size){
    
    if(size <= 0)
        return arr;
    
    int minIndex;
    
    for(int i =0; i< size-1; i++)
    {
        minIndex = i;
        
        for(int j =i+1; j < size; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            swap(&arr[i],&arr[minIndex]);
        }
    }

    // Add your code above this line. Do not modify any other code.
    /* Save the sorted array in 'int arr[]' and return the same array */
    return arr;
}