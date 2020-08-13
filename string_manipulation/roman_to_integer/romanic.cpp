// Converting Romanic notation of numbers to integers
#include<bits/stdc++.h>
using namespace std;

int romanToInt(string A) {
    // Creating A dictionary to store each romanic characters with their key value as the their integer notation.
    std::map<char,int> dict = {{'M',1000}, {'D',500}, {'C',100}, {'L',50}, {'X',10}, {'V',5}, {'I',1}};
    int i, size = A.size();
    char ch, ch1;
    int integer = 0;
    for(i = 0; i < size - 1; i++)
    {
        ch = A[i];
        ch1 = A[i+1];
        if(dict[ch] >= dict[ch1])
            integer += dict[ch];
        else
            integer -= dict[ch];
    }
    integer += dict[A[size-1]];
    return integer;
}

int main()
{
    string str;
    cin >> str;
    cout << romanToInt(str) << endl;
}
