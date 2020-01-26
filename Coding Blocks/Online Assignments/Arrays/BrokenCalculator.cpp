/*
BROKEN CALCULATOR
Andrew was attempting a mathematics test where he needed to solve problems with factorials. One such problem had an answer which equaled 100! ,He wondered what would this number look like. He tried to calculate 100! On his scientific calculator but failed to get a correct answer. Can you write a code to help Andrew calculate factorials of such large numbers?

Input Format:
a single lined integer N

Constraints:
1 < = N < = 500

Output Format
Print the factorial of N

Sample Input
5
Sample Output
120
*/

#include<bits/stdc++.h>
using namespace std;

#define MAX 10000

int getMultiply(int a, int rest[], int restSize)
{
    int carry = 0;

    for(int k=0; k<restSize; k++)
    {
        int product = (rest[k]*a)+carry;
        rest[k] = product%10;
        carry = product/10;
    }

    while(carry)
    {
        rest[restSize] = carry%10;
        carry = carry/10;
        restSize++;
    }

    return restSize;
}

void getFactorial(int input)
{
    int rest[MAX];
    rest[0] = 1;
    int restSize = 1;

    for(int i=2; i<=input; i++)
    {
        restSize = getMultiply(i, rest, restSize);
    }

    for(int j=restSize-1; j>=0; j--)
    {
        cout << rest[j];
    }
}

int main() {
	int n;
    cin >> n;

    getFactorial(n);

    return 0;
}