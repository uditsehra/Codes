// Program to know number of patterns a given number of people
// could go to party only if they can either go in a pair or as indivisuals.

#include<iostream>
using namespace std;

int getNumOfPattern(int n)
{
    if(n==1 or n==2)
    {
        return n;
    }

    int forSingle = getNumOfPattern(n-1);
    int forPair = getNumOfPattern(n-2);

    return forSingle+ forPair*(n-1);
}

int main()
{
    //int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = 3;
    cout << getNumOfPattern(n);

    return 0;
}
