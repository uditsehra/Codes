/*
IS PALINDROME?
Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which tests if the array is a palindrome and returns a Boolean value. Print the value returned.

Input Format:
Enter a number N , add N more numbers

Constraints:
None

Output Format
Display the Boolean result

Sample Input
4
1
2
2
1
Sample Output
true

*/

#include<iostream>
using namespace std;

/*
bool getIfPalindrome(int arr[], int left, int right)
{
	while(left<=right){
		if(arr[left]!=arr[right]){
			return false;
		}
		left++;
		right--;
	}

	return true;
}
*/

bool getIfPalindrome(int arr[], int n, int left, int right)
{
	if(n==1 or n==0)
	{
		return true;
	}

	if(arr[left]!=arr[right])
	{
		return false;
	}

	if(left==right or left>right)
	{
		return true;
	}

	bool result = getIfPalindrome(arr, n, left+1, right-1);
	return result;
}

int main() {
	int n;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}

	bool ans = getIfPalindrome(arr, n, 0, n-1);

	if(ans==0)
	{
		cout << "false";
	}
	else
	{
		cout << "true";
	}
	return 0;
}