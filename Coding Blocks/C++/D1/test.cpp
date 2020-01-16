#include <iostream>
using namespace std;

int getSum(int arr[], int n)
{
    int x = n;
    int sum=0;
    int maxSum=0;
    for(int i=0; i<x; i++)
    {
        sum = 0;
        for(int j=i; j<x; j++)
        {
            sum += arr[j];
            if(sum>maxSum)
            {
                maxSum = sum;
            }
        }
    }

    return maxSum;


}
int main()
{
    int arr[5] = {1,2,-3,4,-5};
    int n=5;

    cout << getSum(arr, 5);


    return 0;
}
