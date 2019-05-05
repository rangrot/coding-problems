# Problem:

 Dutch National Flag problem.
 
 Given an array of integers and an index X. Rearrange the array in the following order.
 
 [ all elements less than a[X] | elements equal to a[X] | elements greater than a[X] ]
  
 Similar to dutch national flag [DNF]

# Examples:

 > A = [3,5,2,6,8,4,4,6,4,4,3] and i = 5 Output = [3,2,3,4,4,4,4,5,6,8,6]
 
# Solution:

- Assumptions:
 The number on each side will not be sorted (or this is just a sorting questions)
 If there are no number less than a[X] than the portion will not exist.
- Explanation:
 Maintain three pointers low < a[X] , mid = a[X] and high > a[X]. 
 Iterate through the array and place the numbers in the correct boundary.

# Test Cases:

1. Edge Cases: Empty Array, NULL Array, X out of bounds.
2. Base Cases: Single element(less, equal, greater), two elements
3. Regular Cases: Single element in pivot, multiple pivots. 

# Complexities:

- Time Complexity: O(n) linear time, as we go through the entire list once.
- Space Complexity: O(1) constant space, as we are reversing in place.