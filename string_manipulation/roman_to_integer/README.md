## Roman Numeric Notattion to Arabic integers

#### Problem Description
Given a string A representing a roman numeral.
Convert A into integer.

A is guaranteed to be within the range from 1 to 3999.

Input 1:
>    A = "XIV"
Output 1:
>    14

Input 2:
>    A = "XX"
Output 2:
>    20

#### Solution
- Creating A dictionary map stl to store each romanic characters with their key value as the their integer notation.
- Traversing through each characters and see whether it should be added to the integer or subtracted from it.
- Addition and Subtraction depends on the next character.
- If the next character' integer representation is smaller or equal than that of the current character, then its representation integer is added else its subtracted.

#### Time Complexity - O(N * M) where M is the size of the dictionary and N is the size of the string.
#### Space Complexity - O(M)
