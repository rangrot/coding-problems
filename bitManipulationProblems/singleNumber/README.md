#Problem:

Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

#Examples:
>Example 1:
>
>Input: [2,2,1]
>Output: 1
>
>Example 2:
>
>Input: [4,1,2,1,2]
>Output: 4
#Solutions:

 Easiest way is to use a hash table with value as key and occurance as pair
 Traverse the array and print the number with the occurance 1 as the answer.
  >Time Complexity: O(n)
  >
  >Space Complexity: O(n)

Better solution is to use XOR, *since XOR of a number with itself is 0* and *XOR of a number with 0 is itself* *XOR is commutative and associative*

>ans = 4 ^ 1 ^ 2 ^ 1 ^ 2
>
>ans = 4 ^ (1^1) ^ (2^2) ^ (1^1) ^ (2^2)
>
>ans = 4 ^ 0
>
>ans = 4
>

#Test Cases:

#Complexities:

 >Time Complexity: O(n) //We only iterate through arr, so the time complexity is the number of elements in arr.
 >
 >Space Complexity: O(1)
 


