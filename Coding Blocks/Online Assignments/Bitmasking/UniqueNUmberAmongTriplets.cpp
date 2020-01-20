/*

UNIQUE NUMBER - III
We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once. Find the unique number. Only use - bitwise operators, and no extra space.

Input Format:
First line contains the number n. Second line contains n space separated number.

Constraints:
N < 10^5

Output Format
Output a single line containing the unique number

Sample Input
7
1 1 1 2 2 2 3
Sample Output
3

*/

#include<iostream>
using namespace std;

int getUniqueNumber(int arr[], int n)
{
    int bitAdder[32] = {0};

    for(int i=0; i<n; i++)
    {
        int var = arr[i];

        for(int j=31; j>=0; j--)
        {
            bitAdder[j] += (var&1);
            var = var>>1;
        }
    }

    int decimal = 0;
    int multiply = 1;

    for(int i=31; i>=0; i--)
    {
        bitAdder[i] = bitAdder[i]%3;
        decimal = decimal + multiply*bitAdder[i];
        multiply = multiply<<1;
    }

    return decimal;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << getUniqueNumber(arr, n) << endl;
	return 0;
}