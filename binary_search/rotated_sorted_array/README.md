## Rotated Array Search

#### Problem description

Given an array of integers A of size N and an integer B.
array A is rotated at some pivot unknown to you beforehand.
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2 ).
You are given a target value B to search. If found in the array, return its index, otherwise return -1.
You may assume no duplicate exists in the array.

**NOTE:- Array A was sorted in non-decreasing order before rotation.**

##### Solution Description
- It is implemented using the concept of **Binary Search Algorithm**.
- First the pivot(the smallest element) is to be found out where rotation takes place.
- Accordingly finding the target value either in the left or right of the pivot.

##### Time complexity - O(log n)
##### Space complexity - O(1)

##### Example
Input 1:
>    A = [4, 5, 6, 7, 0, 1, 2, 3]
>    B = 4
Output 1:
>    0
Explanation 1:
> Target 4 is found at index 0 in A.


Input 2:
>    A = [5, 17, 100, 3]
>    B = 6
Output 2:
>    -1
