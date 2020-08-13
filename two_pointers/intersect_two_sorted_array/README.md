## Intersection of two sorted array

#### Problem Description
Find the intersection of two sorted arrays.
OR in other words,
Given 2 sorted arrays, find all the elements which occur in both the arrays.

Example :

Input : 
>    A : [1 2 3 3 4 5 6]
>    B : [3 3 5]

Output : 
> [3 3 5]

Input : 
>    A : [1 2 3 3 4 5 6]
>    B : [3 5]

Output :
> [3 5]

#### Solution 
- Traverse both the arrays in such a way that current elements found to be equal

#### Time complexity - O(min(A,B)) A,B Are the respective sizes of the sorted arrarys
#### Space COmplexity - O(1)
