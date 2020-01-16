#include<bits/stdc++.h>
using namespace std;

// /3, /2, -1

/* int reduceToZero(int n)
{
    int dp[n+1];

    dp[0] = 0;
    dp[1] = -1;
    dp[2] = 2;
    dp[3] = 2;

    for(int i=2; i<=n ; i++)
    {
        if(dp)
        if(n==1)
        {
            return -1;
        }

        int count1 = INT_MAX, count2 = INT_MAX, count3 = INT_MAX;

        if(n%3==0)
        {
            count3 = reduceToZero(n/3) + 1;
        }

        if(n%2==0)
        {
            count2 = reduceToZero(n/2) + 1;
        }

        count1 = reduceToZero(n-1) + 1;

        dp[n] = count1;
        
    }

}

int reduceToZeroByDp(int n)
{
    int dp[n+1];

    dp[0] = 0;
    dp[1] = 1;

    int count1, count2, count3
    for(int i=2; i<=n; i++)
    {
        if(n%2==0)
    }
} */

void getBoardLength(int n, int dice)
{
    int dp[n+1]={0};

    dp[n] = 1;
    dp[n-1] = 1;

    if(dp[dice]=0)
    {
        for(int i=n-2; i>=dice; i--)
        {
            int j = i;
            while(i!=n)
            {
                dp[j] += dp[++i];
            }
        }
    }

    cout << dp[dice]<< endl;
}

//Find the longest subsequence in increasing order.
// Can be done by recursion but we will try this by dp


// Partial equal subset on leetcode use Knapsack to solve;




int main()
{
    int dice = 3;

    int n = 10;

    getBoardLength(n, dice);

    return 0;    
}