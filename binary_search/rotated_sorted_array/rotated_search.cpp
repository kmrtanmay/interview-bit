// Rotated sorted array 

#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &A, int B)
{
    int low, mid, high, pivot=-1;
    int size = A.size();
    low = 0;
    high = size-1;

    // pivot is the smallest element of the array
    while(low <= high)
    {
        mid = low + (high - low)/2;

        if (mid == 0 || A[mid] < A[mid+1] && A[mid] < A[mid-1])
        {
            pivot = mid;
            break;
        }
        if(A[mid] < A[high])
            high = mid - 1 ;
        else if(A[mid] > A[high])
            low = mid + 1 ;
    }

    if( B == A[pivot])
        return pivot;
    if (B == A[0])
        return 0;
    if( A[0] < A[size-1]) // if the array is perfectly sorted
    {
        low = A[0];
        high = size - 1;
    }
    // if the array is rotated 
    else if (B < A[0])  // if the element is in the right of pivot
    {
        low = pivot;
        high = size-1;
    }
    else if( B > A[0]) // if the element is in the left of pivot
    {
        low = 0;
        high = pivot - 1;
    }
    // Binary search Algorithm
    while(low <= high)
    {
        mid = low + (high - low)/2; 
        if(A[mid] < B)
            low = mid + 1;
        else if(A[mid] > B)
            high = mid -1;
        else
        {
            return mid;
            break;
        }
    }
    return -1;
      
}
int main()
{
    vector<int> vec;
    int B, x;
    for(int i=0;i<size;i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    cin >> B ;
    cout << search(vec,B)<<endl;
}