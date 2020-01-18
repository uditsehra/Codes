/*

Take as input str, a string. Write a recursive function which returns a new string in which all duplicate consecutive characters are separated by a ‘ * ’. E.g. for “hello” return “hel*lo”. Print the value returned

Input Format:
Enter a String

Constraints:
None

Output Format
Display the resulting string (i.e after inserting (*) b/w all the duplicate characters)

Sample Input
hello
Sample Output
hel*lo

*/

#include<iostream>
using namespace std;

string getDupicateCharacterFormatting(string input, int start, int end, string ans)
{
    if(input.length()==0 or input.length()==1)
    {
        return input;
    }

    if(start==end)
    {
        ans += input[start];
        return ans;
    }

    ans += input[start];
    if(input[start]==input[start+1])
    {
        ans += "*";
    }

    string str = getDupicateCharacterFormatting(input, start+1, end, ans);

    return str;
}

int main() {
    string str;
    cin >> str;

    cout << getDupicateCharacterFormatting(str, 0, str.length()-1, "") << endl;
	return 0;
}