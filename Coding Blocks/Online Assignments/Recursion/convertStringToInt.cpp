/*
RECURSION-CONVERT STRING TO INTEGER
Take as input str, a number in form of a string. Write a recursive function to convert the number in string form to number in integer form. E.g. for “1234” return 1234. Print the value returned.

Input Format:
Enter a number in form of a String

Constraints:
None

Output Format
Print the number after converting it into integer

Sample Input
1234
Sample Output
1234

*/

/*
#include<iostream>
#include<string>
using namespace std;

int convertStringToInteger(string input, int start, int end, int ans)
{
    int len = input.length();

    if(start>=end)
    {
        return ans;
    }

    if(len == 0 or len == 1)
    {
        int ans = stoi(input);
        return ans;
    }

    string digit = input[start];
    ans = ans * 10 + stoi(digit);
    int  integer = convertStringToInteger(input, start+1, end, ans);

    return integer;
}

int main() {
    string str;
    cin >> str;
    int len = str.length();
    cout << convertStringToInteger(str, 0, len-1, 0) << endl;
	return 0;
}

*/
#include<bits/stdc++.h>
#include<string>
using namespace std;

int convertStringToInteger(string input)
{    
    if (input.length() == 1) {
        return (input[0] - '0'); 
    }
    
    //Recursive Call
    int i = convertStringToInteger(input.substr(1)); 
    
    //One's place digit
    int j = input[0] - '0';   
    
    //To get ten's place digit and answer.
    j = j * pow(10, input.length() - 1) + i; 
    
    return int(j); 
}

int main() {
    string str;
    cin >> str;

    cout << convertStringToInteger(str) << endl;
	return 0;
}

