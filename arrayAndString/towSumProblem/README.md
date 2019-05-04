# Problem:

Given an array of integers and a val X, find a pair of integers that sums up to X. - solve using sorting and hash map

# Examples:

 Array = [1,2,3,4,5,6] and X=11, the answer would be 5 and 6, which sum to 11.

# Solution [Sorted Array]:
 
- Assumptions:
   - The input is always a sorted array.
   - The output is printed as the indices.
   - If there is no solution we print NULL.
   - There can be duplicates, and the first encountered instance is printed.
   - If there are multiple solutions, the first solution is printed.

- Explanation
   1. Have start and end pointers.
   2. If sum of the two is greater than X, decrease the sum - > decrease end.
   3. If sum of the tow is less than X, increase the sum -> increase start.
   4. If sum == X, print start and end.

# Solution [HASH MAP]:
    TBD
    
# Test Cases:
 
 - Edge Cases: Empty array, Single element.
 - Base Cases: 2 elements (with and without the sum)
 - Regular Cases: 3 to 5 elements (with and without the sum and elements)

# Complexities:

 - Time Complexity: O(n) going through all the elements once in worst case.
 - Space Complexity: O(1) doing the solution in place, no new memory allocated.