// Get possible strings for a keypad mobile if we press a given number.
// for example if a given number is 23
// keypad orientation
// 'abc'    'def'   'ghi'   'jkl'   'mno'   'pqrs'  'tuv'   'wxyz'
//  2         3       4       5       6       7       8        9
// so possible strings will be ad,ae,af,be,bd,bf,ce,cd,cf

#include<iostream>
using namespace std;

string keycode[] = {".","#","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"

void getPossibleStringsOnKeypad(string str, string ans)
{
    if(str.length()==0)
    {
        cout << ans << endl;
        return "";
    }

    char ch = str[0];
    string ros = str.substr(1);
    
    for(int i=0; i<keycode.size(); i++)
    {

    }
}

int main()
{
    string str = "23";
    string ans;
//    int len = str.length()
    cout << getPossibleStringsOnKeypad(num) << "\n";

    return 0;
}