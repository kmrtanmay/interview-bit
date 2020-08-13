// valid number

#include<bits/stdc++.h>
using namespace std;

int isNumber(string A) { 
    int size = A.size();
    int i, j, dots, start = 0, end = size;
    while(A[start] == ' ')
        start++;
    while(A[end - 1] == ' ')
        end--;
        
    if(A[0] == '+' || A[0] == '-' )
    {
        start = start + 1;
    }
    if( A[0] == '.')
    {
        start = start + 1;
        dots = 1;
    }
    for( i = start; i < end; i++)
    {
    	// checking whether it is an exponential part
        if(A[i] == 'e')
        {
            if(i == 0)
                return 0;
            if(A[i - 1] == '.')
                return 0;
            
            if(i + 1 == end)
                return 0;
            else if(i + 2 == end && (A[i + 1] < '0' || A[i + 1] > '9'))
                return 0;
            else
            {
                int start1 = i + 1;
                if( A[i + 1]  == '+' || A[i + 1]  == '-')
                    start1 = i + 2;
                for(j = start1; j < end; j++)
                {
                    if(A[j] < '0' || A[j] > '9')
                        return 0;
                }
                return 1;
            }
        }
        else if(dots > 1 && A[i] == '.' ) // no more than one dot should br present
            return 0;
        else if (dots == 0 && A[i] == '.')
            dots = 1;
        else if((A[i] < '0' || A[i] > '9') || A[i] != '.') // checking whether the character is non numeric
            return 0;
    }
    if(A[end-1] < '0' || A[end-1] > '9') //last character must be numeric
        return 0;
    return 1;
}

int main()
{
	string str;
	cin>>str;
	cout<< isNumber(str) <<endl;
}