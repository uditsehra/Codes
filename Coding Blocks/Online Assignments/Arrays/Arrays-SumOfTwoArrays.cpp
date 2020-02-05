/*
ARRAYS-SUM OF TWO ARRAYS
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, the size of second array and take M more inputs and store that in second array. Write a function that returns the sum of two arrays. Print the value returned.

Input Format:
Constraints:
Length of Array should be between 1 and 1000.

Output Format
Sample Input
4
1 0 2 9
5
3 4 5 6 7
Sample Output
3, 5, 5, 9, 6, END


*/





#include <bits/stdc++.h>
using namespace std;

// Return sum of two number represented by the arrays.
// Size of a[] is greater than b[]. It is made sure
// be the wrapper function
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void getSum(int arr1[], int arr2[], int n, int m)
{
    //Arrays to store the sum;

    int sum = 0;
    vector<int> ans;

    int i = n-1;
    int j = m-1;
    int k = 0;

    int carry = 0;
    
    //Until we reach beginning of array.
    //We are comparing only for second array.
    //Because we have already compare the size.
    //Of array in wrapper function.
    while(j>=0)
    {
        //Find sum of corresponding element of both arrays.
        k = arr1[i]+arr2[j]+carry;
        sum = k%10;
        ans.push_back(sum);

        //Find carry for next sum.
        carry = (k/10);
    //    cout << sum << " " << carry<<"XX"<< endl;

        i--;
        j--;
    }

    //If second array size if less than first.

    while(i>=0)
    {
        k = arr1[i] + carry;
        sum = (k%10);
        ans.push_back(sum);
        carry = k/10;
    //    cout << sum << " "<< carry<< "XX"<<endl;
        i--;
    }

    //If there is carry on adding 0 index elemts, 
    //Then append 1 to total.

    if(carry)
    {
        ans.push_back(carry);
    }

    //Converting array into number.
    reverse(ans.begin(), ans.end());

    for(vector<int> :: iterator it = ans.begin(); it!=ans.end(); it++)
    {
        cout << *it<<", ";
    }
    cout << "END"<<endl;
}

int main() {
    int m, n;
    cin >> m;
    int arr1[m];
    for(int i=0; i<m; i++)
    {
        cin >> arr1[i];
    }

    cin >> n;
    int arr2[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr2[i];
    }

    if(n<=m)
    {
        getSum(arr1, arr2, m, n);
    }
    else
    {
        getSum(arr2, arr1, n, m);
    }

	return 0;
}