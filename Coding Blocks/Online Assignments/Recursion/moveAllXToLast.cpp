/*
Take as input str, a string. Write a recursive function which moves all ‘x’ from the string to its end.
E.g. for “abexexdexed” return “abeedeedxxx”.
Print the value returned

Input Format
Single line input containing a string

Constraints
Length of string <= 1000

Output Format
Single line displaying the string with all x's moved at the end

Sample Input
axbxc
Sample Output
abcxx
Explanation
All x's are moved to the end of string while the order of remaining characters remain the same.
*/

#include<iostream>
using namespace std;

string moveAllXToEnd(string str){
	if(str.length()==0){
		return "";
	}

	char ch = str[0];
	string ros = str.substr(1);

	string recursionResult = moveAllXToEnd(ros);

	if(ch=='x'){
		return recursionResult + ch;
	}else{
		return ch+recursionResult;
	}
}

int main()
{
    string str;
    cin >> str;

    cout << moveAllXToEnd(str)<< endl;

    return 0;
}