## Reverse a String
 
#### Problem Description

Given a string A.

Return the string A after reversing the string word by word.

NOTE:

- A sequence of non-space characters constitutes a word.

- Your reversed string should not contain leading or trailing spaces, even if it is present in the input string.

- If there are multiple spaces between words, reduce them to a single space in the reversed string.

For Example:

Input 1:
>    A = "the sky is blue"
Output 1:
>    "blue is sky the"

Input 2:
>    A = "this is ib"
Output 2:
>    "ib is this"

#### Solution
- Extract each word and add it to the another string.
- Whenever a whitespace is encountered, a word is extracted.

##### Time Complexity - O(N) where N is the length of the string.
##### Space Complexity - O(N)
