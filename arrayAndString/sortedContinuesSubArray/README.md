# Problem:
Given an array of integers, find the continuous subarray, which when sorted, results in the entire array being sorted. 

# Examples:

A = [0,2,5,3,1,8,6,9], result is the subarray [2,5,3,1,8,6]

# Solution:

1. Start from 0. Find the first dip in value, call that i.
[1,3,5,2,6,4,7,8,9] --> First dip starts at index 2.

2. Start from end. Find the first bump in value, call that j.
[1,3,5,2,6,4,7,8,9] --> First bump starts at index 5.

3. We now know that the subarray [i,j] is causing the array to be unsorted. But simply sorting this subarray will not sort the array. 

4. After all, sorting [5,2,6,4] will not do the trick because there is a 3 before it. We need to expand this subarray. Let's find the min of subarray [i,j]

5. In this case, the min is 2. In order for the entire array to be sorted, we will have to expand subarray [i,j] to include all numbers greater than 2. 
So we expand from {5,2,6,4} to {3,5,2,6,4}.

6. We do the same for max. We don't need to expand for max in this case, so that subarray is the answer.

# Test Cases:
- Edge Cases: empty array, null array
- Base Case: one element, 2 elements (sorted and unsorted)
- Regular Case: array already sorted, sorted portion at beginning/end etc.

# Complexities:
- Time Complexity: O(n)
- Space Complexity: O(1)