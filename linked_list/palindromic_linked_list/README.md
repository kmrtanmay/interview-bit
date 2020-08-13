## Palindromic Linked List

#### Problem Description

Given a singly linked list, determine if its a palindrome. Return 1 or 0 denoting if its a palindrome or not, respectively.

Notes:

Expected solution is linear in time and constant in space.
For example,

List 1-->2-->1 is a palindrome.
List 1-->2-->3 is not a palindrome.

#### Solution
- First, find the middle element by traversing the list.
- Then reverse the linked List after the middle element.
- Then Compare the element in the left half of the linked list and right half of the linked list traversing in each half from left to right one by one.
- If there is any mismatch then 0 will be returned.
- If the end is reached, then it will be palindromic.

#### Time complexity - O(n)
#### Space Complexity - O(1)