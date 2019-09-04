
-----------------------------------------------------------------LEVEL 1--------------------------------------------------------------------------------------------------
-------
Q 1
Write a function that takes an input - char* str and returns 1 if all the characters in the string are unique, 0 if there is even a single repeated character.
For an empty string, return 1. For a NULL input return 0. Examples:

are_all_characters_unique("abcde") -> 1

are_all_characters_unique("aa") -> 0

are_all_characters_unique("") -> 1
-----------------------

----------------------------------
Q 2
A palindrome is a string or sequence of characters that reads the same backward as forward. For example, "MADAM" is a palindrome. Write a function that takes in an input string: char* str and returns an int value of 1 if the input string is a palindrome, 0 otherwise.
An empty string is considered a palindrome. You also need to account for the space character - i.e. "race car" should return 0 as read backward it is "rac ecar". Examples:

is_string_palindrome("madam") -> 1

is_string_palindrome("aabb") -> 0

is_string_palindrome("") -> 1
-------------------------------------

-----------------------------------------
Q 3

Write a function to check whether an input string has a balanced number of left and right () parentheses
If the string is balanced, return 1, else return 0.




Examples:
balanced("()()()") ==> 1

balanced("())(") ==> 0
---------------------------------------------------

-----------------------------------------------
Q 4
You are given an m x n 2D image matrix where each integer represents a pixel. Flip it in-place along its vertical axis.



Example:

Input image :  
              1 0
              1 0

Modified to :   
              0 1
              0 1
-----------------------------------------------------------------

-------------------------------------------------------------

Q 6
The Fibonacci Sequence is the series of numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... The next number is found by adding up the two numbers before it.

Write a recursive function fib(n) that returns the nth Fibonacci number. n is 0 indexed, which means that in the sequence 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ..., n == 0 should return 0 and n == 3 should return 2. Assume n is less than 15.

Even though this problem asks you to use recursion, more efficient ways to solve it include using an Array, or better still using 3 volatile variables to keep a track of all required values. Check out this blog post to examine better solutions for this problem.
Examples:
fib(0) ==> 0
fib(1) ==> 1
fib(3) ==> 2 

    In the above solution we have used an array to store the output at every step, which increases the space complexity of the problem. Let us avoid that by storing only the previous two fibonacci numbers. After all, you only need the last two numbers to calculate the next number! 

Implementation

  int x = 0, y = 1, temp =0;
  for (int i = 2; i <= n; i++)
    {
      temp = x + y; // To Store previous two numbers
      x = y;
      y = temp;
    }
  return temp;

This approach brings down the space complexity to O(1). This problem is a favorite because it naturally lends itself to successive optimizations. 
------------------------------------------------------------


-------------------------------------------------------
Q 7
You are given an m x n 2D image matrix where each integer represents a pixel. Flip it in-place along its horizontal axis.



Example:



Input image :  

              1 1
              0 0

Modified to :   

              0 0​
              1 1
-------------------------------------------------------

--------------------------------------------------------
Q 8
Write a function that reverses an interger int x and returns the reversed number. Examples:
-123 ==> -321
123 ==> 321
--------------------------------------------------------

----------------------------------------------------------
Q 9 
Write a function that takes in a string char* str and returns the reversed version of the string in char* output_string. Examples:

reverse_string("abcde") -> "edcba"

reverse_string("1") -> "1"

reverse_string("") -> ""

reverse_string("madam") -> "madam" 
----------------------------------------------------------

------------------------------------------------------------
Q 10
Implement a function to check in a single pass, if the given singly-linked list has an even or an odd number of nodes in it.
If the list has an even number of nodes, return 1, else return 0.
An Empty list has 0 nodes which makes the number of nodes in it even.

Examples: 

Linkedlist: 1->2->3->4

head=1

is_list_even(head) => 1



Linkedlist: 1->2->3->4->5

head=1

is_list_even(head) => 0
--------------------------------------------------------------

--------------------------------------------------------------LEVEL2----------------------------------------------------------------------------------------
----------------------------------------------------------
Q 1
Write a function that takes in an array of ints and uses the Selection Sort algorithm to sort the array 'in place' in ascending order. The function should return the same in-place sorted array.
Note: Selection sort offers improved performance over bubble sort for arrays with large number of elements. Where bubble sort accumulated the largest elements towards the end of the array, selection sort accumulates the smallest elements at the beginning of the array. See the hints and click the red colored links for additonal details on the algorithm.

Examples: 

selection_sort_array({1,5,2}, 3) -> {1,2,5}

selection_sort_array({11},1) -> {11}

selection_sort_array({}, 0) -> {}
{} -> [Empty] Array 
----------------------------------------------------------
----------------------------------------------------------
Q 2
Given two strings - input1 and input2, determine if they are isomorphic.
Two strings are isomorphic if the letters in one string can be remapped to get the second string. Remapping a letter means replacing all occurrences of it with another letter. The ordering of the letters remains unchanged. You can also think of isomorphism as it is used in chemistry - i.e. having the same form or overall shape. Target linear time and space complexity with your solution.

Examples:

Input 1 : css  
Input 2 : dll
Output  : 1

Input 1 : css 
Input 2 : dle
Output  : 0
----------------------------------------------------------
----------------------------------------------------------
Q 3
----------------------------------------------------------
----------------------------------------------------------
Q 4
----------------------------------------------------------
----------------------------------------------------------
Q 5
----------------------------------------------------------
----------------------------------------------------------
Q 6
----------------------------------------------------------
----------------------------------------------------------
Q 7
----------------------------------------------------------
----------------------------------------------------------
Q 8
----------------------------------------------------------
----------------------------------------------------------
Q 9
----------------------------------------------------------
----------------------------------------------------------
Q 10
----------------------------------------------------------
----------------------------------------------------------
Q 11
----------------------------------------------------------
----------------------------------------------------------
Q 12
----------------------------------------------------------
----------------------------------------------------------
Q 13
----------------------------------------------------------
----------------------------------------------------------
Q 14
----------------------------------------------------------
----------------------------------------------------------
Q 15
----------------------------------------------------------
----------------------------------------------------------
Q 16
----------------------------------------------------------
----------------------------------------------------------
Q 17
----------------------------------------------------------
----------------------------------------------------------
Q 18
----------------------------------------------------------
----------------------------------------------------------
Q 19
----------------------------------------------------------
----------------------------------------------------------
Q 20
----------------------------------------------------------
----------------------------------------------------------
Q 21
----------------------------------------------------------
----------------------------------------------------------
Q 22
----------------------------------------------------------
----------------------------------------------------------
Q 23
----------------------------------------------------------
----------------------------------------------------------
