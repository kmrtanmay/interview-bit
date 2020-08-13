## Finding the position of element to be inserted in the sorted array.
##### Problem Description
Given a sorted array A and a target value B, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

**Problem Constraints**
-1 <= |A| <= 100000
-1 <= B <= 109

**Example Input**

Input 1:
> A = [1, 3, 5, 6]
> B = 5

Input 2:
> A = [1, 3, 5, 6]
> B = 2


**Example Output**
Output 1:
> 2
Output 2:
> 1

##### This implementation is based on the ** Binary Search Algorithm**


Time complexity : O(log n)
Space complexity : O(1)

