/* 
CHARACTER TYPE
Take the following as input.

A character (ch) Write a function that returns ‘U’, if it is uppercase; ‘L’ if it is lowercase and ‘I’ otherwise. Print the value returned.

Input Format:
Character (ch)

Constraints:
No constraints

Output Format
'L' (if ch is lower-case) 'U' (if ch is upper-case) 'I' (otherwise)

Sample Input
s
Sample Output
L
*/

#include<iostream>
using namespace std;
int main() {
	char input;
	cin >> input;

	if(input>=65 && input <=90)
		cout << 'U';
	else if(input>=97 && input <=122)
		cout << 'L';
	else
		cout << 'I';
	return 0;
}