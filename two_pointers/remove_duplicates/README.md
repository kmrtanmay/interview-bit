## Remove Duplicates from a sorted array

#### Problem Description
Remove duplicates from Sorted Array
Given a sorted array, remove the duplicates in place such that each element appears only once and return the new length.

Note that even though we want you to return the new length, make sure to change the original array as well in place

Do not allocate extra space for another array, you must do this in place with constant memory.

Example:
Given input array A = [1,1,2],
Your function should return length = 2, and A is now [1,2]. 

#### Solution
- Two pointer technique is used
- When my current element is different from the next element, then the element at current position of non duplicates array should be modified with the current element of the duplicates array.

#### Time Complexity - O(N)
#### Space Complexity - O(1)