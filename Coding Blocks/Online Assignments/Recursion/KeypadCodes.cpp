/*
Take as input str, a string. str represents keys pressed on a nokia phone keypad. We are concerned with all possible words that can be written with the pressed keys.

Assume the following alphabets on the keys: 1 -> abc , 2 -> def , 3 -> ghi , 4 -> jkl , 5 -> mno , 6 -> pqrs , 7 -> tuv , 8 -> wx , 9 -> yz

E.g. “12” can produce following words “ad”, “ae”, “af”, “bd”, “be”, “bf”, “cd”, “ce”, “cf”

a. Write a recursive function which returns the count of words for a given keypad string. Print the value returned.

b.Write a recursive function which prints all possible words for a given keypad string (void is the return type for function).

Input Format
Enter a number

Constraints
None

Output Format
Display the total no. of words and display all the words in a space separated manner

Sample Input
12
Sample Output
ad ae af bd be bf cd ce cf
9
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string keypad[] = { "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void printKeypad(string str, string ans, int& count)
{
	if(str.length()==0)
	{
		count++;
		cout << ans << " ";
		return;
	}

	char ch = str[0];
	string ros = str.substr(1);
	string key = keypad[ch - '0'];

	for(int i=0; i<key.length(); i++)
	{
		printKeypad(ros, ans + key[i],count);
	}
}

int main() {

	string n;
	cin >> n;
	int count = 0;

	printKeypad(n, "",count);
	cout << endl;
	cout << count;
	return 0;
}