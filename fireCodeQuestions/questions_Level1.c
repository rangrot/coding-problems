// stdio.h, string.h have been included for this problem.
// You don't need any other header files.

// Add any helper functions(if needed) above.
//Q 1
int are_all_characters_unique(char* str){
    if(str == NULL)
        return 0;
        
    int len =  strlen(str);  
    
    if(len == 0)
        return 1;
        
    int charArr[256] = {0};
    
    for(int i =0; i< len; i++)
    {
        
        charArr[str[i] - '0']++;
        if(charArr[i] > 1)
            return 0;

    }
    
    for (int i = 0; i< 256; i++)
    {
        if(charArr[i] > 1)
            return 0;
    }
    
    return 1; 
}

// stdio.h, string.h have been included for this problem.
// You don't need any other header files.

// Add any helper functions(if needed) above.
//Q 2
int is_string_palindrome(char* str) {
    
    int len = strlen(str);
    if(!str)
        return 0;

    int start = 0, end = len -1;
    while(start < end)
    {
        if(str[start] != str[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

// stdio.h, string.h have been included for this problem.
// You don't need any other header files.

// Add any helper functions(if needed) above.
//Q 3
int balanced(const char *str) {
    int len = strlen(str);
    if(!str || len <=0)
        return 0;
    
    int leftBrace =0;
    int rightBrace = 0;
    
    for(int i =0; i < len; i++)
    {
        if(str[i] == '(')
        {
            leftBrace++;
        }
        else if(str[i] == ')')
        {
            rightBrace++;
        }
        
        if(leftBrace < rightBrace)
            return 0;
    }
    
    if(leftBrace == rightBrace)
        return 1;
    else
        return 0;
}


// stdio.h, string.h have been included for this problem.
// You don't need any other header files.
//Q 4
void flip_vertical_axis(int n, int matrix[n][n]){
    
    for (int row =0; row< n; row++)
    {
        for(int col =0; col < n / 2; col++)
        {
            int tmp = matrix [row][col];
            matrix [row][col] = matrix [row][n -col -1];
            matrix[row][n - col - 1] = tmp;
        }
    }

}


// stdio.h, string.h have been included for this problem.
// You don't need any other header files.

// Add any helper functions(if needed) above.
//Q 5
listNode* insert_at_head( listNode* head, int data){
    
    listNode* newNode = (struct listNode*)malloc(sizeof(struct listNode));
    newNode->value = data;
    
    if(head == NULL)
    {
        head = newNode;
        newNode->next = NULL;
        return head;
    }
    else
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
}


// stdio.h, string.h have been included for this problem.
// You don't need any other header files.

// Add any helper functions(if needed) above.
// Q 6
int fib(int n){
    
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
        
    int first = 0, second = 1, sum =0;
    for(int i = 2; i <= n; i++)
    {
        sum = first + second;
        first = second;
        second = sum;
    }
    
    return sum;
}


// stdio.h, string.h have been included for this problem.
// You don't need any other header files.
//Q 7
void flip_horizontal_axis(int n, int matrix[n][n]){
    
    int tmp;
    
    for(int col =0; col < n; col++)
    {
        for (int row =0; row < n/2; row++)
        {
          tmp = matrix[row][col];
          matrix[row][col] = matrix[n - 1 - row][col];
          matrix[n - 1 - row][col] = tmp;
        }
    }
}

// stdio.h, string.h have been included for this problem.
// You don't need any other header files.
//Q 8
// Add any helper functions(if needed) above.
int reverse(int x) { 
    
    int revnum = 0, neg = 0;
    if (x < 0)        /* If its a negative number */
    {   x = -x;     /* Convert the negative number into positive */
        neg = 1;
    }
    while(x) { /* Loop to reverse the number */
        revnum = revnum*10 + (x%10);
        x = x/10;
    }
    if (neg) { /* If the input number was negative, make the result negative */
        revnum = -revnum;
    }
    return revnum;

}

// stdio.h, string.h have been included for this problem.
// You don't need any other header files.
//Q 9
// Add any helper functions(if needed) above.
char* reverse_string (char* str){
    char* output_string = NULL; 
    /* Calculate length of the string */
    int len = strlen(str);
    /* allocate memory of size equal to the length of the given string */
    output_string = (char *)malloc((len+1)*(sizeof(char)));   
    // Add your code below this line. Do not modify any other code
    for(int i = 0; i <= len -1; i++)
    {
        output_string[i] = str[len-1-i];
    }
    // Add your code above this line. Do not modify any other code
    return output_string;
}

// stdio.h, string.h have been included for this problem.
// You don't need any other header files.
//Q 10
// Add any helper functions(if needed) above.
int is_list_even(listNode* head){
    
    if(!head)
        return 1;
    int even = 0;
    while(head = head->next)
        even ^= 1;
    return even;
}

// stdio.h, string.h have been included for this problem.
// You don't need any other header files.

// Add any helper functions(if needed) above.

int* find_spiral(int m, int n, int arr[m][n]){
    /* allocate ouput array of size equal to total number of elements in the input matrix */
    int* output_arr = (int *)calloc(m*n, sizeof(int));
    // Add your code above this line. Do not modify any other code.
    int rowStart = 0, rowEnd= m, colStart = 0, colEnd = n;
    
    int row = 0, col =0, i=0;
    //End point will always be the mid of the matrix ie arr[m/2][n/2]
    while(rowStart <= rowEnd && colStart <= colEnd)
    {
        while( row <= rowStart && col <= colEnd)
        {
            output_arr[i++] = arr[row][col];
            col++;
        }
        
        while(row <= rowEnd && col <= colEnd)
        {
            output_arr[i++] = arr[row][col];
            row++;
        }
        
        while(row == rowEnd && col >= colStart)
        {
             output_arr[i++] = arr[row][col];
             col--;
        }
        
        while(row >= rowStart+1 && col == colStart)
        {
             output_arr[i++] = arr[row][col];
             row--;
        }
        
        rowStart++;
        colStart++;
        rowEnd--;
        colEnd--;
    }

    // Add your code below this line. Do not modify any other code.
    return output_arr;
}