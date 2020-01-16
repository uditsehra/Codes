// Program to get to the end of an array using a dice;

#include<bits/stdc++.h>
using namespace std;

int patternToEnd(int si, int last)
{
    if(si==last)
    {
        return 1;
    }    

    if(si>last)
    {
        return 0;
    }

    int pattern=0;

    for(int dice = 1; dice <= 6; dice++)
    {
        pattern += patternToEnd(si+dice, last);
    }

    return pattern;
}

int main()
{
    // int arr[] = {1,2,3,4,5,6,7,8,9,10};
    // int cube = 6;
    // int dist = 10;

    cout << patternToEnd(0, 10) << "\n";

    return 0;
}
