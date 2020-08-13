## Reverse the Bits

#### Problem Description

Reverse the bits of an 32 bit unsigned integer A.
Return a single unsigned integer denoting the decimal value of reversed bits.

Example:

Input 1:
> 0
Input 2:
> 3

Output 1:
> 0
Output 2:
> 3221225472

#### Solution
- Loop through each binary digit of A(in this case 32).
- make a room in the reverse number using left shift operator
- Add the last digit from A bit representation to the reversed number
- then remove the last binary digit from A by right shift operator

#### Time Complexity - O(N)
#### Space Complexity - O(1)