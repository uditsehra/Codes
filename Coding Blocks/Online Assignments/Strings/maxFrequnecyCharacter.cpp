/*

STRINGS-MAX FREQUENCY CHARACTER
Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

Input Format:
String

Constraints:
A string of length between 1 to 1000.

Output Format
Character

Sample Input
aaabacb
Sample Output
a

*/

#include<iostream>
using namespace std;

char getMaxFreqChar(string input)
{
	int len = input.length();
	int freq=0, count=0;
	char temp, ans;

	if(len==0 or len==1)
	{
		ans = input[0];
		return ans;
	}
	for(int i=0; i<len; i++)
	{
		temp  = input.c_str()[i];
		count = 0;
		for(int j=0; j<len; j++)
		{
			if(temp==input[j])
			{
				count++;
			}
		}

		if(count>freq)
		{
			ans = temp;
		}

		freq = max(count,freq);
	}

	return ans;
}

int main() {
	string str;
	cin >> str;

	char ans = getMaxFreqChar(str);
	cout << ans;
	return 0;
}