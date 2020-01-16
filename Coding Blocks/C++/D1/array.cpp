#include <iostream>
using namespace std;

int maximumsum(int arr[])
{
    int i=0, j=0,maxSum =0;
    int l = 5;
    int sum = 0;
    int total = 0;
    int maxsum = 0;
    int minsum = 0;

    for(i=0; i<l; i++)
    {
        total += arr[i];
        if(arr[i]>0)
        {
            sum += arr[i];
        }
        else
        {
            minsum += arr[i];
        }
    }

    maxsum = total - minsum;

    return maxsum;
}

int main()
{
    int arr[5] = {1, 2, -3, 4, 5};
    int n = 5;

    int f = maximumsum(arr);
    cout << f << endl;
    return 0;
}
