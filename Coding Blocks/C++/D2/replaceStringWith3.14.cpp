// Program to replace the parts('pi' or 'Pi') of a string  with 3.14

#include<iostream>
using namespace std;

string replaceWith314(string str)
{
    if(str.length() == 0)
    {
        return "";

    }

    char ch = str[0];
    string leftString = str.substr(1);

    string result = replaceWith314(leftString);

    if(ch=='p' and result[0]=='i')
    {
        return "3.14"+result.substr(1);
    }
    else
    {
        return ch+result;
    }
    
}

int main()
{
    string str = "popieeatspie";

    cout << replaceWith314(str) << "\n";

    return 0;
}
