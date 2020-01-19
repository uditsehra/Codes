/*
CHEWBACCA AND NUMBER
Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

Input Format:
The first line contains a single integer x (1 ≤ x ≤ 10^18) — the number that Luke Skywalker gave to Chewbacca.

Constraints:
x <= 100000000000000000

Output Format
Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

Sample Input
4545
Sample Output
4444
*/

#include<iostream>
using namespace std;

void getInvertedNumber(char input[])
{
	int i=0;

	if(input[i]=='9')
	{
		i++;
	}

	/*int size = sizeof(input)/sizeof(input[0]);

	if(size==0 or size==1)
	{
		if(input[0]!='9')
		{

		}
		cout << input;
	}*/

	for( ;input[i]!='\0'; i++)
	{
		int digit = input[i] - '0';
		if(digit>=5)
		{
			digit = 9 - digit;
			input[i] = digit + '0';
		}
	}

	cout << input << endl;
}

int main() {

	char arr[20];
	cin >>  arr;

	getInvertedNumber(arr);

	return 0;
}