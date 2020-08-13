// Intersection of Two Sorted Arrays
#include<bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int> &A,vector<int> &B) 
{
    int i = 0, j = 0;
    vector<int> C;
    int sizeA = A.size(), sizeB = B.size();
    while( i < sizeA && j < sizeB)
    {
        if( A[i] < B[j])
            i++;
        else if( A[i] == B[j])
        {
            C.push_back(A[i]);
            i++;
            j++;
        }
        else
            j++;
    }
    return C;
}
int main()
{
	int sizeA, sizeB, x, i;
	cin>>sizeA;
	vector<int>  A, B, C;
	for(i = 0; i < sizeA; i++)
	{
		cin>>x;
		A.push_back(x);
	}
	cin>>sizeB;
	for(i = 0; i < sizeB; i++)
	{
		cin>>x;
		B.push_back(x);
	}
	C = intersect(A, B);
	for(i = 0; i < C.size(); i++)
		cout<< C[i] << " ";
	cout<<endl;
}