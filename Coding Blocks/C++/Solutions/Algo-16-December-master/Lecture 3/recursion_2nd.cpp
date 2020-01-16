#include <iostream>
#include <climits>

using namespace std;

string moveAllXToEnd(string str){
	if(str.length()==0){
		return "";
	}

	char ch = str[0];
	string ros = str.substr(1);

	string recursionResult = moveAllXToEnd(ros);

	if(ch=='x'){
		return recursionResult + ch;
	}else{
		return ch+recursionResult;
	}
}

int p = 0;

void printSubsequence(string str,string ans){
	if(str.length()==0){
		// cout<<"print"<<endl;
		cout<<ans<<endl;
		p++;
		return;
	}

	char ch = str[0];
	string ros = str.substr(1);

	printSubsequence(ros,ans);
	printSubsequence(ros,ans+ch);

}

void printPermutations(string str,string ans){
	if(str.length()==0){
		cout<<ans<<endl;
		return;
	}

	for(int i=0;i<str.length();i++){
		char ch = str[i];

		string ros = str.substr(0,i) + str.substr(i+1);
		printPermutations(ros,ans+ch);
	}
}

void mappedString(string str,string ans){
	if(str.length()==0){
		cout<<ans<<endl;
		return;
	}

	char ch1 = str[0];
	string ros = str.substr(1);

	int ch1_int = ch1 - '0';

	ch1 = ch1 - '0' + 'A' - 1;

	mappedString(ros,ans + ch1);

	if(ros.length()>0){

		char ch2 = str[1];
		int ch2_int = ch2 - '0';

		int second_num = ch1_int*10 + ch2_int;

		if(second_num < 27){
			ch2 = second_num + 'A' - 1;
			string ros2 = str.substr(2);

			mappedString(ros2,ans+ch2);
		}
	}

}

string keycode[] = {".","#","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void printKeypad(string str,string ans){
	if(str.length()==0){
		cout<<ans<<endl;
		return;
	}

	char ch = str[0];
	string ros = str.substr(1);

	string key = keycode[ch - '0'];

	for(int i=0;i<key.length();i++){
		printKeypad(ros,ans + key[i]);
	}
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

int perfectSquare(int n){
	if(n<=0){
		return 0;
	}

	int minValue = INT_MAX;

	int square = 1;

	for(int i=1;square<=n;i++){
		minValue = min(minValue,perfectSquare(n-square) + 1);
		square = i*i;
	}

	return minValue;
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

int countBinaryString(int n){
	if(n==1 or n==2){
		return n+1;
	}

	return countBinaryString(n-1) + countBinaryString(n-2);
}

bool isPalindrome(string str,int left,int right){
	while(left<=right){
		if(str[left]!=str[right]){
			return false;
		}
		left++;
		right--;
	}

	return true;
}

int palindromePartitioning(string str,int start,int end){
	if(start>end){
		return 0;
	}

	if(start==end){
		return 0;
	}

	if(end-start ==1){
		return str[start]==str[end] ? 0 : 1;
	}

	if(isPalindrome(str,start,end)){
		return 0;
	}

	int minValue = INT_MAX;

	for(int i=start;i<end;i++){

		int leftCuts = palindromePartitioning(str,start,i);
		int rightCuts = palindromePartitioning(str,i+1,end);

		minValue = min(minValue,leftCuts + 1 + rightCuts);
	}

	return minValue;
}

void printMazePath(int sr,int sc,int er,int ec,string path){
	if(sr==er and sc==ec){
		cout<<path<<endl;
		return;
	}

	if(sr>er or sc>ec){
		return;
	}

	printMazePath(sr+1,sc,er,ec,path + "V");
	printMazePath(sr,sc+1,er,ec,path + "H");
}

void printBoardPath(int start,int end,string path){
	if(start==end){
		cout<<path<<endl;
		return;
	}

	if(start>end){
		return;
	}

	for(int dice = 1;dice<=6;dice++){
		char ch = dice + '0';
		printBoardPath(start+dice,end,path + ch);
	}
}

int countMazePathDia(int sr,int sc,int er,int ec){
	if(sr==er and sc==ec){
		return 1;
	}

	if(sr>er or sc>ec){
		return 0;
	}

	int count = 0;

	int vertical = countMazePathDia(sr+1,sc,er,ec);
	int horizontal = countMazePathDia(sr,sc+1,er,ec);
	int dia = countMazePathDia(sr+1,sc+1,er,ec);

	count = horizontal + vertical + dia;
	return count;
}

int main(){

	// cout<<moveAllXToEnd("xxxkjfxxxoe")<<endl;
	// cout<<moveAllXToEnd("abcdxxxbght")<<endl;

	// printSubsequence("abc","");
	// cout<<"Number of Subsequence "<<p<<endl;

	// printPermutations("abc","");

	// char a = 'A';

	// a= a +1;

	// cout<<(a)<<endl;

	// mappedString("1234","");

	// printKeypad("23","");

	// cout<<reduceToOne(21)<<endl;

	// cout<<perfectSquare(13)<<endl;

	// int arr[] = {1,11,5,5};
	// int n = 4;

	// cout<<isPossible(arr,n)<<endl;

	// cout<<countBinaryString(3)<<endl;

	// cout<<palindromePartitioning("abbbababchdd",0,11)<<endl;

	// printMazePath(0,0,2,2,"");

	// printBoardPath(0,3,"");

	// cout<<countMazePathDia(0,0,2,2)<<endl;

	return 0;
}