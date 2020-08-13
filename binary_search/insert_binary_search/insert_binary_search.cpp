#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int searchInsert(vector<int> &A, int B) 
{
    int low = 0, high = 0, mid = 0;
    int size = A.size();
    high = size - 1;
    int result = 0;
    // if B is smaller than the smallest element of the array.
    if(B < A[0])
        return 0;
    // if B is larger than the largest element of the array.
    if(B > A[size-1])
        return size;
    // This loop ends at a time it reaches a number closest to B.
    while(low < high)
    {
        mid = low + (high - low)/2 ;
        if(A[mid] == B)
            return mid;
        else if(A[mid] < B)
            low = mid + 1;
        else
            high = mid - 1 ; 
    }
    if(A[low] < B)  // if the inserted element is greater.
        return low + 1;
    else if( A[low] > B) // if the inserted element is smaller.
        return low;
    else
        return low; // if the inserted element is equal.
}

int main()
{
    vector<int> vec;
    int B;
    int n, x, i;
    cin >> n;   
    for(int i = 0; i < n; i++)
    {
        cin>> x;
        vec.push_back(x);
    }
    cin >> B;
    cout << searchInsert(vec,B) << endl;
}