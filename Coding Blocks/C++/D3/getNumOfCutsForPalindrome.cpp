// Given a given string get number of cuts required so that every substring of the partition is a palindrome.

#include<iostream>
#include<climits>
using namespace std;

bool isPalindrome(string str, int left, int right)
{
    while (left<=right)
    {
        
    }
    
}

int getCuts(string str, int start, int end)
{  
    if(start>end)
    {
        return 0;
    }
    if(start==end)
    {
        return 0;
    }

    if(end - start ==1)
    {
        return str[start] == str[end] ? 0 : 1;
    }

    if(isPalindrome(str, start, end))
    {
        return 0;
    }

    int minValue = INT_MAX;
    
    if()
}

int main()
{
    string str = "abbbaccdegeged";
    int end = str.length();
    count << getCuts(str, 0, end);

    return 0;
}