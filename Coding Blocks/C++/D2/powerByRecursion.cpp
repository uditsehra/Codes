// Program to get the power of a number using recursion.

#include<iostream>
using namespace std;

int getPower(int n, int p)
{
    if(p==0)
        return 1;
    //int recursionResult
    return n*getPower(n, p-1);
}

int getPowerBetter(int n, int p)
{
    if(p==0)
        return 1;

    int power1 = getPowerBetter(n, p/2);

    int powerSquare = power1 * power1;

    return p&1 ? powerSquare*n : powerSquare;
}

int main()
{
    int n=2;
    int p=8;

   // cout << getPower(n, p);
    cout << getPowerBetter(n,p)<< endl;
    return 0;

}
