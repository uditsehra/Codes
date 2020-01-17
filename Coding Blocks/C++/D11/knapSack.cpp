#include<iostream>
using namespace std;

int knapSack(int value[], int weight[], int si, int n, int capacity, int maxValue)
{
    if(si==n)
    {
        return 0;
    }
 
    int include = INT_MAX;
    int exclude = INT_MAX;

    if(weight[si]<=capacity)
    {
        include = knapSack(value, weight, si+1, n, capacity-weight[si], maxValue+value[si]);
    }
    exclude = knapSack(value, weight, si+1, n, capacity, maxValue);

    maxValue = max(include, exclude);

    return maxValue;
}

int main()
{
    int value[] = {50, 30, 70, 40};
    int weight[] = {5, 4, 6, 3};
    int n = 4;
   // int knapWeight = 0;
    int maxValue = 0;
    int cap = 8;

    cout << knapSack(value, weight, 0, n, cap, maxValue)<< endl;

    return 0;
}