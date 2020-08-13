// Finding the square root of a number without using any stl or built-in function

// This logic is based on the binary search algorithm

#include<iostream>
using namespace std;

int sqrt(long A) {
    long i,low = 1,high = A,mid;
    for(i = 0;i < A; i++)
    {
        mid = low + (high - low)/2;

        if(mid * mid == A) // if a number is a perfect square then mid will be its square root;
            return mid;
        else if(mid * mid > A)
        {
            if ( (mid - 1)*(mid - 1) < A) // if the inequality sign changes by subtracting 1 from mid then we have reached the square root 
                return mid - 1 ;
            high = mid - 1;
        }
        else if(mid * mid < A) // // if the inequality sign changes by adding 1 to mid then we have reached the square root 
        {
            if ( (mid + 1)*(mid + 1) > A)
                return mid  ;
            low = mid + 1;
        }
    }
    return 0;
}
int main()
{
    long A, sqroot;
    cin>> A;
    sqroot = sqrt(A);
    cout << sqroot;
}
