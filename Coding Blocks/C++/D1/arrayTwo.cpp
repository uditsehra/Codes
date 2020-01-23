#include<iostream>
using namespace std;

void subSum(int arr[], int n)
{
    int mAx = 0;
    for(int i=0; i<n; i++)
    {
        int sum = 0;

        for(int j=i; j<n; j++)
        {
            int sum = 0;
            sum += arr[j];


            if(sum > mAx)
            {
                mAx = sum;
            }
        }
    }
    cout << max << endl;
}

int main()
{
    int n = 5;
    
    int arr[n] ={1, 2, -3, 4, -5};

    subSum(arr, 5);

    return 0;
}
