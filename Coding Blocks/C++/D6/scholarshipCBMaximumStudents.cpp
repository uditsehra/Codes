#include<bits/stdc++.h.h>
using namespace std;

bool isPossible(int n, int m, int x, int y, int mid)
{
    if((mid*x)-((n-mid)*y) <= m)
    {
        return true;
    }
    
    return false;
}

int getMaximumStudents(int n, int m, int x, int y)
{
    int minStudents = 0;
    int maxStudents = n;
    int ans = 0;

    while(start <=end)
    {
        int mid = minStudents + (maxStudents - minStudents)/2;//start + (end - start)/2;

        if(isPossible(n, m, x,, y, mid))
        {
            
        }
        else
            end = mid - 1;
    }
}

int main()
{
    int n = 5;
    int m = 10;
    int x = 2;
    int y = 1;

    cout << getMaximumStudents(n, m, x, y) << endl;

    return 0;
}