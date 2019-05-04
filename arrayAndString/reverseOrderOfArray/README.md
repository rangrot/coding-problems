# Problem:

 Reverse the order of elements in an array.

# Examples:

 For example, A = [1,2,3,4,5,6], Output = [6,5,4,3,2,1]
 
# Solution:

- Assumptions:
 We modify the existing array instead of creating new.
- Explanation:
 Maintain two pointers start and end. Swap the values and then move them inwards.

# Test Cases:

1. Edge Cases: Empty Array, NULL Array
2. Base Cases: Single element in the array
3. Regular Cases: 2 elements, 3 elements

# Complexities:

- Time Complexity: O(n) linear time, as we go through the entire list once.
- Space Complexity: O(1) constant space, as we are reversing in place.