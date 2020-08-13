## Add Two Numbers in the Linked List

#### Problem Description
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

Input:
> (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output:
> 7 -> 0 -> 8

>    342 + 465 = 807
Make sure there are no trailing zeros in the output list
So, 7 -> 0 -> 8 -> 0 is not a valid response even though the value is still 807.

#### Solution
- The first loop will execute upto the point when both Linked list has elements in the same position.
- When their sum at any position is greater than 9, then carry is set as 1 for the next position.
- When Any of the list is longer, the loop will continue with remaining elements in the longer list.
- When At last there is a still a carry then a new number is formed with the value 1.

#### Time Complexity - O(Max(A,B))
#### Space Complexity - O(1)