// Find the number occuring once in an array having rest elements appearing twice.
# include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &A) {
    
    int single_num = A[0];
    for(int i = 1; i < A.size(); i++)
        single_num = single_num ^ A[i];
        
    return single_num;
}
int main()
{
	int num, x;
	vector<int> vect;
	cin>> num;
	for( int i = 0; i < num; i++)
	{
		cin>>x;
		vect.push_back(x);
	}
	cout << singleNumber(vect)<<endl;

}