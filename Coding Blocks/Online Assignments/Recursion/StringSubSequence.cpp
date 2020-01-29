/*
RECURSION-SUBSEQUENCES
Take as input str, a string. We are concerned with all the possible subsequences of str. E.g.

a. Write a recursive function which returns the count of subsequences for a given string. Print the value returned.

b. Write a recursive function which prints all possible subsequences for a “abcd” has following subsequences “”, “d”, “c”, “cd”, “b”, “bd”, “bc”, “bcd”, “a”, “ad”, “ac”, “acd”, “ab”, “abd”, “abc”, “abcd”.given string (void is the return type for function).
Note: Use cin for input

Input Format:
Enter a string

Constraints:
None

Output Format
Display the total no. of subsequences and also print all the subsequences in a space separated manner

Sample Input
abcd
Sample Output
 d c cd b bd bc bcd a ad ac acd ab abd abc abcd 
16

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int token = 0;

void printStringSubSequence(string input, string ans)
{
	if(input.length()==0)
	{
		cout << ans << " ";
		token++;
		return;
	}

	char letter = input[0];
	string remianingString = input.substr(1);

	printStringSubSequence(remianingString, ans);
	printStringSubSequence(remianingString, ans+letter);
}

int getStringSubSequenceCount(string input, int count)
{
	int length = input.length();
    count = (int)(pow(2, length)+0.5);

    return count;
}

int main() {
    string str;
    cin >> str;

    printStringSubSequence(str,"");
    cout<< endl;
    cout << getStringSubSequenceCount(str,0) << endl;
	return 0;
}