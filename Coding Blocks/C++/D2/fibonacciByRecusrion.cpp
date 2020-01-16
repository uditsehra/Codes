#include<bits/stdc++.h>
using namespace std;

int fibbo(int n)
{
    if(n==0 or n==1)
    {
        return n;
    }

    int ans = fibbo(n-1);
    int ans2 = fibbo(n-2);

    return ans+ans2;
}

int main()
{
    int n = 6;

    cout << fibbo(n) << "\n";

    return 0;
}