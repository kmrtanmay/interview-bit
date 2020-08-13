#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &A, int B) {
    int i, left_pointer, right_pointer, size = A.size();
    long long sum_3 = 0, sum = 0, min = LLONG_MAX;
    std::sort(A.begin(),A.end());
    for(i = 0; i < size - 2 ; i++)
    {
        left_pointer = i + 1;
        right_pointer = size - 1;
        while(left_pointer < right_pointer)
        {
            sum = A[i] + A[left_pointer] + A[right_pointer];
            if( min > std::abs(B - sum))
            {
                min = std::abs(B - sum);
                sum_3 = A[i] + A[left_pointer] + A[right_pointer];
            }
            if (sum_3 == B)
                return sum_3;
            if( std::abs(B - A[i] - A[left_pointer+1] - A[right_pointer]) < std::abs(B - A[i] - A[left_pointer] - A[right_pointer-1]))
                left_pointer++;
            else
                right_pointer--;
        }
        
    }
    return sum_3;
}
int main()
{
	int size, i;
	std::vector<int> v;
	cin>>size;
	int x, B;
	for(i = 0; i < size; i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cin>> B;
	cout<< threeSumClosest(v, B)<< endl;

}