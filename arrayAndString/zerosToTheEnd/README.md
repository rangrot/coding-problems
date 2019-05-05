# Problem:

Given an array of random numbers, Push all the zero’s of a given array to the end of the array.  The order of all other elements should be same. Expected time complexity is O(n) and extra space is O(1).

# Examples:

For example, if the given arrays is 

Input = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0} 

Output= {1, 9, 8, 4, 2, 7, 6, 0, 0, 0, 0}

# Solution:

# Test Cases:
 - All 0's
 - No zeroes
 - 1 element
 - Empty array
 - normal case
 - already all 0's at front / back
# Complexities:

 - Time Complexity: O(n) going through all the elements once in worst case.
 - Space Complexity: O(1) doing the solution in place, no new memory allocated.