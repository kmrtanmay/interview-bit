## Longest Common Prefix

#### Problem description

Given the array of strings A,
you need to find the longest string S which is the prefix of ALL the strings in the array.
Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1
and S2.

For Example, longest common prefix of "abcdefgh" and "abcefgh" is "abc".

Input 1:
>    A = ["abcdefgh", "aefghijk", "abcefgh"]
Output 1:
>    "a"
    Explanation 1:
>        Longest common prefix of all the strings is "a".

Input 2:
>    A = ["abab", "ab", "abcd"];
Output 2:
>    "ab"
    Explanation 2:
>        Longest common prefix of all the strings is "ab".

#### Solution

- The prefix_len has been used for storing the prefix length;
- prefix_len is assumed to be equal to the length of the first string.
- Then all strings are compared with the first string to get the least value of common prefix which can be monotonically decreasing.
- If there is no such common prefix the loop breaks in the middle and a NULL string is returned to the main function.
- After getting the prefix_len the prefix string is returned.

##### TIME COMPLEXITY - O(N*K)
- N is the length of the array of strings and K is the length of the prefix.

##### Space Complexity - O(1)

