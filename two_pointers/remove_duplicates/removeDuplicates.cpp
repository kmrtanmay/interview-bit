// Remove Duplicates from a sorted array

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &A) {
    int i, j = 0;
    int size = A.size();
    if( size == 1)
        return 1;
    for( i = 0; i < size - 1; i++)
    {
        if(A[i] != A[i+1]) // if the next element is different from the current element then modification is done
        {
            A[j] = A[i];
            j++;
        }
    }
    A[j++] = A[size - 1];
    return j;
}
int main()
{
    int i, x, j;
    int size;
    cin>>size;
    vector<int> A;
    for(i = 0; i < size; i++)
    {
        cin>>x;
        A.push_back(x);
    }
    j = removeDuplicates(A);
    for(i = 0; i < j; i++)
        cout<< A[i] << " ";
    cout<<endl;
}