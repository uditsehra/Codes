#include<bits/stdc++.h>
using namespace std;

int targetSum(int arr[], int s)
{
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;

    if(n==1)
    {
        if(arr[0] == s)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }

    for(int i=0; i<n; i++)
    {
        arr[i] = -arr[i];
        int j = n, sum;
        while(j!=0)
        {
            sum +=arr[j];
            j--;

            if(sum==s)
                count++;
        }
    }

    return count;
}

// Leet Code Distinct Subsequence ii tey and run
// www.leetcode.com/problems/distinct-subsequences-ii/
// Use hash-map and an array to solve this by Dynamic Programming.

class Solution {
public:
    int distinctSubseqII(string S) {
        
        int n = S.length();
        int dp[n+1] = {0};
        unordered_map<char, int> h;
        
        
        dp[0] = 1;
        
        
        for(int i=1; i<=n; i++)
        {
            int mod = 1e9+7;
            
            dp[i] = (2*dp[i-1])%mod;
            
            char ch = S[i-1];
            
            if(h.count(ch))
            {
                int idx = h[ch];
                
                dp[i] = (dp[i] - dp[idx]+mod)%mod;
            }
            
            h[ch] = i-1;
        }
        return dp[n]-1;
    }
};


// Leet code distinct-subsequence
//  www.leetcode.com/problems/distinct-subsequence/






int main()
{
    int s = 3;

    int arr[] = {1,1,1,1,1};
    
    targetSum(arr, s);

    return 0;
}