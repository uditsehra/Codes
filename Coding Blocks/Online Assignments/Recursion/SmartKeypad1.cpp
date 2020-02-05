/*
You will be given a numeric string S. Print all the possible codes for S.

Following vector contains the codes corresponding to the digits mapped.

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

For example, string corresponding to 0 is " " and 1 is ".+@$"

Input Format
A single string containing numbers only.

Constraints
length of string <= 10

Output Format
All possible codes one per line in the following order.

The letter that appears first in the code should come first

Sample Input
12

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string keypad[] = { "", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void printKeypad(string str, string ans)
{
	if(str.length()==0)
	{
		cout << ans << endl;
		return;
	}

	char ch = str[0];
	string ros = str.substr(1);

	string key = keypad[ch - '0'];

	for(int i=0; i<key.length(); i++)
	{
		printKeypad(ros, ans + key[i]);
	}
}

int main() {

	string n;
	cin >> n;

	printKeypad(n, "");
	return 0;
}