/*

BALANCED PARENTHESIS
You are given a string of '(' and ')'. You have to check whether the sequence of parenthesis is balanced or not. For example, "(())", "(())()" are balanced and "())(", "(()))" are not.

Input Format:
A string of '(' , ')' , '{' , '}' and '[' , ']' .

Constraints:
1<=|S|<=10^5

Output Format
Print "Yes" if the parenthesis are balanced and "No" if not balanced.

Sample Input
(())
Sample Output
Yes

*/

#include<bits/stdc++.h>
#include<string>
#include<stack>
using namespace std;

bool isValid(string input, int len)
{
	if(len==1 or len==0)
	{
		return false;
	}

	stack<char> stck;

	for(int i=0; i<input.length(); i++)
	{
		if(input[i]=='(')
		{
			stck.push(input[i]);
		}
		else if(input[i]=='{')
		{
			stck.push(input[i]);
		}
		else if(input[i]=='[')
		{
			stck.push(input[i]);
		}//else if(!stck.empty() and stck.top()=='(')                            -> before
		else if(!stck.empty() and stck.top()=='(' and input[i]==')')      //  ->  after 
		{
			stck.pop();
		}
		else	if(!stck.empty() and stck.top()=='{'  and input[i]=='}')
		{
			stck.pop();
		}
		else if(!stck.empty() and stck.top()=='['  and input[i]==']')
		{
			stck.pop();
		}
		else
		{
			return false;
		}
	}
    //return true;                             -> before                              
	return stck.empty();                //     -> after
}

int main() {
	string str;
	cin>>str;

	int len = str.length();
	bool ans = isValid(str, len);

	if(ans)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No");
	}
	return 0;
}