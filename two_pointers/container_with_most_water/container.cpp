// Container with Most Water

#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &A) {
    int left_pointer = 0, right_pointer = 0;
    int size = A.size();
    int base = 0, height = 0, area = 0, max = 0 ;
    right_pointer = size - 1;
    while( left_pointer < right_pointer)
    {
        height = std::min(A[left_pointer],A[right_pointer]);
        base = right_pointer - left_pointer;
        area = height * base;
        if(max < area)
            max = area;
        if( A[left_pointer] >= A[right_pointer])
            right_pointer--;
        else
            left_pointer++;
        
    }
    return max;
}
int main()
{
	vector<int> vec;
	int size, x;
	cin>>size;
	for(int i = 0; i < size; i++)
	{
		cin>>x;
		vec.push_back(x);
	}
	cout<< maxArea(vec) <<endl;
}
