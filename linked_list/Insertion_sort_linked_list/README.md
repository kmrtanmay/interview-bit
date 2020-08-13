## Insertion on the Linked List

#### Problem Description

Sort a linked list using insertion sort.

We have explained Insertion Sort at Slide 7 of Arrays

Insertion Sort Wiki has some details on Insertion Sort as well.

Example :

Input :
> 1 -> 3 -> 2

Return
> 1 -> 2 -> 3

#### Solution
- There are two parts of the list- first the sorted part and second the part whose elements is to be inserted to the sorted list such that it still remains sorted.
- If the element to be inserted is at the head of the sorted list, then the head of the sorted list should be reinitialised with inserted element.
- If the insertion is inside the sorted list, then the node after which the insertion is to be done is to be found out using the function insert_at.
- If the element is to be inserted at the end of the sorted list, this inserted node becomes the tail of the sorted list.
- The process continues until the whole list is completely sorted.

**Insertion sort in the linked list is more efficient compared to than in arrays as the insertion operation takes O(1) while in case of arrays it takes O(n) time** 

#### Time Complexity - O(N^2) 
#### Space Complexity - O(1)