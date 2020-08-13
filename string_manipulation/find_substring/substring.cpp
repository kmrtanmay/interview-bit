// Finding whether the given substring is present in the another sting or not

#include<bits/stdc++.h>
using namespace std;

int strStr(string A, string B) {
    int i, j, diff;
    int sizeA = A.length();
    int sizeB = B.length();
    if(sizeB > sizeA || sizeB == 0 || sizeA == 0) // if size of B is greater than that of A or any of them is NULL.
        return -1;
    diff = sizeA - sizeB;
    // Searching the first character of B in A and according start searching for other characters
    // if the end of string B is reached then it is a substring of A.
    for(i = 0; i <= diff ; i++ )
    {
        if(A[i] == B[0])
        {   
            for(j = 0; j < sizeB; j++)
            {
                if( A[i+j] == B[j] && j == sizeB - 1)
                    return i;
                if( A[i+j] != B[j] )
                    break;
            }
        }
    }
    return -1;
}

int main()
{
	string A, B;
	cin>>A>>B;
	cout<< strStr(A, B)<<endl;
}