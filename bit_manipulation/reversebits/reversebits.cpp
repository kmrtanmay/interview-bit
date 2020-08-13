// Reverse the bits
#include <bits/stdc++.h>
using namespace std;
unsigned int reverse(unsigned int A) {
    int reverse = 0;
    int size = sizeof(A) * 8;
    for(int i = 0; i < size ; i++)
    {
        reverse <<= 1; // make a room in the reverse number using left shift operator
        reverse = reverse | ( A & 1); // Add the last digit from A bit representation to the reversed number
        A >>= 1; // then remove the last binary digit from A by right shift operator
    }
    return reverse;
}

int main()
{
    unsigned int A;
    cin>>A;
    cout<<reverse(A)<<endl;
}