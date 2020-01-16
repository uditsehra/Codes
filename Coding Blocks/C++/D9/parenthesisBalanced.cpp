#include<bits/stdc++.h>
#include<stack>
using namespace std;

bool isBalanced(string str, int len)
{
    if(len&1)
    {
        return false;
    }
    
    stack<char> s;

    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == '(')
        {
            s.push(str[i]);
        }
        else if(!s.empty() and s.top()=='(')
        {
            s.pop();
        }
        else
        {
            cout << "Parenthesis is not balanced";
            return false;
        }
    }

    cout << "Parenthesis is balanced";
    return true;
}

int main()
{
    string str;
    str = "((())";

    int len = str.length();

    isBalanced(str, len);

    return 0;
}