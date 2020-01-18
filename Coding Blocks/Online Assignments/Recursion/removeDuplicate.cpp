/*

STRINGS-REMOVE DUPLICATES
Take as input S, a string. Write a function that removes all consecutive duplicates. Print the value returned.

Input Format:
String

Constraints:
A string of length between 1 to 1000

Output Format
String

Sample Input
aabccba
Sample Output
abcba

*/

#include<iostream>
using namespace std;

string removeConsecutiveDuplicates(string input, int start, int end, string ans)
{
    if(start==end)
    {
        ans += input[start];
        return ans;
    }

    if(input[start]!=input[start+1])
    {
        ans += input[start];        
    }

    string str = removeConsecutiveDuplicates(input, start+1, end, ans);

    return str;
}

int main() {
    string str;
    cin >> str;

    cout << removeConsecutiveDuplicates(str, 0, str.length()-1, "") << endl;
	return 0;
}