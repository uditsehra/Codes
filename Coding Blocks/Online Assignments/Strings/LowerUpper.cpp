/* 
LOWER UPPER
Print "lowercase" if user enters a character between 'a-z' , Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.

Input Format:
Single Character .

Constraints:
-

Output Format
lowercase UPPERCASE Invalid

Sample Input
$
Sample Output
Invalid
 */

#include<iostream>
using namespace std;

int main() {
	char input;
	cin >> input;

	//For a-z
	if(input>=97 && input<=122)
	{
		cout << "lowercase";
	}
	//For A-Z
	else if(input>=65 && input<=90)
	{
		cout << "UPPERCASE";
	}
	else
	{
		cout << "Invalid";
	}

	return 0;
}