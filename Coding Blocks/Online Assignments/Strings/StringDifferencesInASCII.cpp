/* 
STRINGS-DIFFERENCE IN ASCII CODES
Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.

Input Format:
String

Constraints:
Length of String should be between 2 to 1000.

Output Format
String

Sample Input
acb
Sample Output
a2c-1b
*/

#include<iostream>
using namespace std;

string getStringDiffASCII(string str)
{
	string output;
	output += str[0];
	int len = str.length();
	
	if(len==0 or len==1)
	{
		return str;
	}

	for(int i=0; i<len-1; i++)
	{
		int diff = str[i+1] - str[i];
		output += to_string(diff);
		output += str[i+1];
	}

	return output;
}
int main() {
	string str;
	cin >> str;

	cout << getStringDiffASCII(str)<<endl;
	return 0;
}