// Reverse a String
#include<bits/stdc++.h>
using namespace std;

string solve(string A) {
    string word;
    string B;
    A = " " + A + " ";
    int size = A.size();
    for(int i = 1; i < size; i++)
    {
        if(A[i] == ' ' && A[i-1] != ' ' )
        {
            B = word + ' ' + B;
            word.clear();
        }
        else if (A[i] != ' ' )
            word = word + A[i];
            
    }
    if(B[B.size() - 1] == ' ')
        B.erase(B.size()-1);
    A = B;
    return A;
}

int main()
{
    string str;
    cin>>str;
    str = solve(str);
    cout<< str << endl;
}
