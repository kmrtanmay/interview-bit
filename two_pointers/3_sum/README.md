## 3_sum

#### Problem Description
Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target.
Return the sum of the three integers.

Assume that there will only be one solution

Example:
given array S = {-1 2 1 -4},
and target = 1.

The sum that is closest to the target is 2. (-1 + 2 + 1 = 2)

#### Solution
- **Two Pointer Technique** is used.
- First Sort the the given array.
- Fix the first number. This number is from 0th to (size-3)th positions of the array. Therefore iterating the sorting array from 0th to (size-3)th positions and assigning the first number as A[i].
- Second number is assigned as A[i+1]
- Third number is assigned as A[size-1]
- if the their sum is closer to the target value from the previous sum calculated, sum of these numbers are reassigned.
- if by moving left pointer to the right, the sum of these numbers is closer compared to by that by of moving the right pointer to the left, the left pointer is incremented else the right pointer is decremented.

#### Time complexity - O(N^2)
#### Space Complexity - O(1)


