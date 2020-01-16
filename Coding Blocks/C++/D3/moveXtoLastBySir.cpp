// Move all the letters 'x' to the end of the string;

#include<bits/stdc++.h>
using namespace std;

string moveAllXToEnd(string str)
{
    if(str.length()==0)
    {
        return str;
    }

    char ch = str[0];
    string ros = str.substr(1);

    string result = moveAllXToEnd(ros);

    if(ch == 'x')
    {
        return result+ch;
    }
    else
    {
        
        return ch+result;
    }
    

}

int main()
{
    string str = "xxxfjskdfxxxfsxxlkjkl";

    cout << moveAllXToEnd(str);

    return 0;

}