/*

POWER(O(LOGN))
Take as input x and n, two numbers. Write a function to calculate x raise to power n. Target complexity is O(logn). NOTE: Try both recursive and bitmasking approach.

Input Format:
Enter the number N and its power P

Constraints:
None

Output Format
Display N^P

Sample Input
2
3
Sample Output
8

*/

#include<iostream>
using namespace std;

int getPowerBetter(int n, int p)
{
    if(p==0)
        return 1;

    int power1 = getPowerBetter(n, p/2);

    int powerSquare = power1 * power1;

    return p&1 ? powerSquare*n : powerSquare;
}

int main() {
	int n, p;
	cin >> n >> p;

	cout << getPowerBetter(n, p) << endl;

	return 0;
}