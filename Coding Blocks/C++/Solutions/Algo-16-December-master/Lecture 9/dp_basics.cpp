#include <iostream>
#include <vector>

using namespace std;

int fib(int n){
	if(n==0 or n==1){
		return n;
	}

	return fib(n-1) + fib(n-2);
}

int fibMemo(int n,int dp[]){
	if(n==0 or n==1){
		dp[n] = n;
		return n;
	}

	if(dp[n]!=-1){
		return dp[n];
	}

	int fibn1 = fibMemo(n-1,dp);
	int fibn2 = fibMemo(n-2,dp);

	int fibn = fibn1 + fibn2;

	dp[n] = fibn;

	// for(int i=0;i<=5;i++){
	// 	cout<<dp[i]<<" ";
	// }
	// cout<<endl;
	// cout<<"*******************"<<endl;

	return fibn;
}

int fibDP(int n){

	int dp[n+1];

	dp[0] = 0;
	dp[1] = 1;

	for(int i=2;i<=n;i++){
		dp[i] = dp[i-1] + dp[i-2];
	}

	return dp[n];
}

int reduceToOne(int n){
	if(n==1){
		return 0;
	}

	int count1 = INT_MAX,count2 = INT_MAX,count3 = INT_MAX;

	if(n%3==0){
		count3 = reduceToOne(n/3) + 1;
	}

	if(n%2==0){
		count2 = reduceToOne(n/2) + 1;
	}

	count1 = reduceToOne(n-1) + 1;

	return min(count1,min(count2,count3));
}

int reduceToOneMemo(int n,int dp[]){
	if(n==1){
		dp[n] = 0;
		return 0;
	}

	if(dp[n]!=-1){
		return dp[n];
	}

	int count1 = INT_MAX,count2 = INT_MAX,count3 = INT_MAX;

	if(n%3==0){
		count3 = reduceToOneMemo(n/3,dp) + 1;
	}

	if(n%2==0){
		count2 = reduceToOneMemo(n/2,dp) + 1;
	}

	count1 = reduceToOneMemo(n-1,dp) + 1;

	dp[n] = min(count1,min(count2,count3));

	for(int i=1;i<=10;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	cout<<"****************"<<endl;

	return dp[n];
}

int reduceToOneDP(int n){

	int dp[n+1];

	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;

	for(int i=4;i<=n;i++){

		int count1 = INT_MAX,count2 = INT_MAX,count3 = INT_MAX;

		if(i%3==0){
			count3 = dp[i/3] + 1;
		}

		if(i%2==0){
			count2 = dp[i/2] + 1;
		}

		count1 = dp[i-1] + 1;

		dp[i] = min(count1,min(count2,count3));
	}

	return dp[n];
}

int countBoardPath(int start,int end){
	if(start==end){
		return 1;
	}

	if(start>end){
		return 0;
	}

	int count = 0;

	for(int dice = 1;dice<=6;dice++){
		count+=countBoardPath(start+dice,end);
	}

	return count;
}

int countBoardPathMemo(int start,int end,int dp[]){
	if(start==end){
		dp[start] = 1;
		return 1;
	}

	if(start>end){
		return 0;
	}

	if(dp[start]!=0){
		return dp[start];
	}

	int count = 0;

	for(int dice = 1;dice<=6;dice++){
		count+=countBoardPathMemo(start+dice,end,dp);
	}

	dp[start] = count;

	for(int i=0;i<=10;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	cout<<"****************"<<endl;

	return count;
}

int countBoardPathDP(int start,int end){
	int dp[end + 1];

	dp[end] = 1;

	for(int i = end-1;i>=start;i--){

		dp[i] = 0;

		for(int dice = 1;dice<=6;dice++){

			if(i + dice <= end){
				dp[i]+=dp[i+dice];
			}
		}	
	}

	return dp[start];
}
    
int perfectSquare(int n,int dp[]){
    if(n==0){
        return 0;
    }
        
    if(dp[n]!=-1){
        return dp[n];
    }
        
    int minValue = INT_MAX;
        
    for(int i=1;i*i<=n;i++){
        int abhiTakKaAnswer = perfectSquare(n - i*i,dp) + 1;
        minValue = min(minValue,abhiTakKaAnswer);
    }
        
    dp[n] = minValue;

    for(int i=1;i<=10;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	cout<<"****************"<<endl;
        
    return minValue;
}

int numSquaresMemo(int n) {
        
    int dp[n+1];
    memset(dp,-1,sizeof(dp));
        
    return perfectSquare(n,dp);
}

int numSquaresDP(int n) {
        
    int dp[n+1];
        
    dp[0] = 0;
    dp[1] = 1;
        
    for(int i=2;i<=n;i++){
            
        int minValue = INT_MAX;
            
        for(int j=1;j*j<=i;j++){
            int abhiTakKaAnswer = dp[i-j*j] + 1;
            minValue = min(minValue,abhiTakKaAnswer);
        }
            
        dp[i] = minValue;
    }
        
    return dp[n];
}

int lengthOfLIS(vector<int>& nums) {
        
    if(nums.size()==0){
        return 0;
    }
        
    vector<int> dp(nums.size(),1);
        
    for(int i=1;i<nums.size();i++){
            
        for(int j=0;j<i;j++){
                
            if(nums[i] > nums[j]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
        
    int maxLength = dp[0];
        
    for(int i=1;i<dp.size();i++){
        maxLength = max(dp[i],maxLength);
    }
        
    return maxLength;
}


bool partitionEqualSumSubset(int arr[],int n,int si,int sum,int total){
	if(2*sum==total){
		return true;
	}

	if(sum>total or si>=n){
		return false;
	}



	bool include = partitionEqualSumSubset(arr,n,si+1,sum+arr[si],total);
	bool exclude = partitionEqualSumSubset(arr,n,si+1,sum,total);

	return exclude||include;
}

bool isPossible(int arr[],int n){
	int total = 0;

	for(int i=0;i<n;i++){
		total+=arr[i];
	}

	if(total&1){
		return false;
	}

	return partitionEqualSumSubset(arr,n,0,0,total);
}

int longestIncreasingSubsequence(string s1,string s2){
	if(s1.length()==0 or s2.length()==0){
		return 0;
	}

	char ch1 = s1[0];
	char ch2 = s2[0];

	string ros1 = s1.substr(1); 
	string ros2 = s2.substr(1);

	if(ch1==ch2){

		return 1 + longestIncreasingSubsequence(ros1,ros2);

	}else{

		int firstChoice = longestIncreasingSubsequence(s1,ros2);
		int secondChoice = longestIncreasingSubsequence(ros1,s2);

		return max(firstChoice,secondChoice);
	}
}

const int MAX = 100;

int dp[MAX][MAX];

int lcsMemo(string s1,string s2){
	if(s1.length()==0 or s2.length()==0){
		dp[s1.length()][s2.length()] = 0;
		return 0;
	}

	if(dp[s1.length()][s2.length()]!=-1){
		return dp[s1.length()][s2.length()];
	}

	char ch1 = s1[0];
	char ch2 = s2[0];

	string ros1 = s1.substr(1); 
	string ros2 = s2.substr(1);

	int result;

	if(ch1==ch2){

		result  = 1 + lcsMemo(ros1,ros2);

	}else{

		int firstChoice = lcsMemo(s1,ros2);
		int secondChoice = lcsMemo(ros1,s2);

		result =  max(firstChoice,secondChoice);
	}

	dp[s1.length()][s2.length()] = result;

	for(int i=0;i<=5;i++){
		for(int j=0;j<=5;j++){
			cout<<dp[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"*********************"<<endl;

	return result;
}

int main(){

//*************FIBONACCI************

	// cout<<fib(7)<<endl;

	// int n = 45;
	// int dp[n+1];

	// memset(dp,-1,sizeof(dp));

	// cout<<fibMemo(n,dp)<<endl;

	// cout<<fibDP(7)<<endl;

	// clock_t start = clock();
	// fib(n);
	// clock_t end_1 = clock();
	// fibDP(n);
	// clock_t end_2 = clock();
	// fibMemo(n,dp);
	// clock_t end_3 = clock();
	
	// cout<<"Recursion took "<<(end_1 - start)<<endl;
	// cout<<"DP took "<<(end_2 - end_1)<<endl;
	// cout<<"Memoization took "<<(end_3 - end_2)<<endl;

//*************REDUCE TO ONE************

	// int n = 10;
	// int dp[n+1];
	// memset(dp,-1,sizeof(dp));

	// cout<<reduceToOneMemo(n,dp)<<endl;

	// cout<<reduceToOneDP(n)<<endl;

//*************COUNT BOARD PATH************

	// int end = 10;
	// int dp[end+1];
	// memset(dp,0,sizeof(dp));
	// cout<<countBoardPathMemo(0,end,dp)<<endl;

	// int end = 10;
	// int start = 0;
	// cout<<countBoardPathDP(start,end)<<endl;

//*************PERFECT SQUARE************

	// int n = 10;
	// cout<<numSquaresMemo(n)<<endl;

	// cout<<numSquaresDP(n)<<endl;

//*************LONGEST INCREASING SUBSEQUENCE************

	// int arr[] = {3,6,2,5,7,4,10};
	// int n = 7;

	// lengthOfLIS()

//*************LEETCODE 416************
// PARTIAL EQUAL SUBET SUM

//*************LONGEST COMMON SUBSEQUENCE 1143***************

	// cout<<longestIncreasingSubsequence("abcdef","gahcdef")<<endl;

	memset(dp,-1,sizeof(dp));

	cout<<lcsMemo("bcdef","hcpef")<<endl;

	return 0;
}