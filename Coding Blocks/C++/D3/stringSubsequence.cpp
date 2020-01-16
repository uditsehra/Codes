// Get String Subsequence of a string

#include<bits/stdc++.h>
using namespace std;

int p = 0;

void printSubsequence(string str, string ans)
{
    if(str.length()==0)
    {
        cout << ans << "\n";
        p++;
        return;
    }

    char ch = str[0];
    string stringLeft = str.substr(1);

    printSubsequence(stringLeft, ans);
    printSubsequence(stringLeft, ans+ch);
}

int main()
{
    printSubsequence("abc","");
    cout << "Number of subsequence" << p<< "\n";

    return 0;
}