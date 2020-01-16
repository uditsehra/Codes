// Minimise a given number either by /3 /2 or /-1  in minimum number of steps.

#include<bits/stdc++.h>
using namespace std;

int reduceToOne(int n)
{
    if(n==1){
        return 0;
    }

    int count1 = INT_MAX, count2 = INT_MAX, count3 = INT_MAX;

    if(n%3==0){
        count3 = reduceToOne(n/3) + 1;
    }

    if(n%2==0)
    {
        count2 = reduceToOne(n/2) + 1;
    }

    count1 = reduceToOne(n-1) + 1;

    return min(count3, min(count2, count1));
}

int main()
{
    int num = 21;

    cout << reduceToOne(num) << "\n";

    return 0;
}