## Finding The Substring without using any in-built function

#### Problem Description

- locate a substring ( needle ) in a string ( haystack ). 
- Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

#### Solution
- We will try to find the first matched character of string B in string A.
- Then accordingly we will start matching the other character well upto the length of string B.
- If it reaches the end of the string B, then we have found out the substring.
- If it not, it will repeat the step 1 until it reaches (size of A - size of B).

#### Time Complexity - O((size of A -size of B)* size of B))
#### Space Complexity - O(1)



