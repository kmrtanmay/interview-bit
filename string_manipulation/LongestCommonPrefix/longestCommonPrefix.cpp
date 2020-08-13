// Longest Common Prefix
#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &A) {
    int size, i, j;
    size = A.size();
    string str="";
    int prefix_len = A[0].length();
    // comparing the prefix of each string with the first string
    for(i = 1; i < size ; i++)
    {
        if(A[i][0] != A[0][0]) // Incase there is no such common prefix.
            return str;
        for(j = 0; j < prefix_len; j++)
        {
            if(A[0][j] != A[i][j])
            {
                prefix_len = j  ;
                break;
            }
                
        }
    }
    
    
    for(i = 0; i < prefix_len; i++)
        str = str + A[0][i];
        
    return str;
}

int main()
{
    int i;
    vector<string> A;
    string x;
    int n;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        A.push_back(x);
    }
    string str = longestCommonPrefix(A);
    cout << str << endl;
}