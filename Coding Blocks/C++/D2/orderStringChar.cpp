// Program to shift all the letter exept 'x' in a string to beginning like
// for example: "xxhixxxkillxxmexxxxnow"  -> "hikillmenowxxxxxxxxxxx"

#include<iostream>
#include<string>
using namespace std;
string exceptX;
int count = 0;

string getOrder(string str, int a)
{
    if(str.length() == 0)
    {
        count = a - count;
        while(count!=0)
        {
            exceptX +='x';
            count--;
        }
        return exceptX;
    }   
    
    // string ch = str
    string leftString = str.substr(1); 
    
    // cout << leftString << endl 
    if(str[0]!='x')
    {
     //   cout << str[0] << endl;
        exceptX += str[0];
        count++;
    }
    return getOrder(leftString,a);

}

int main()
{
    string str = "xxxxxkillxxxmexxxnowxxx";

    cout << getOrder(str, str.length())<< endl;

    return 0;
}
