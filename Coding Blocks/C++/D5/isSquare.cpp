#include<iostream>
using namespace std;

bool isSquare(int n)
{
    int start = 1;
    int end = n;

    while(start<=end)
    {
        int mid = (start + end)/2;

        if(mid*mid == n)
        {
            cout << "Perfect Square";
            return true;
        }
        else if(mid*mid>n)
        {
            end  = mid-1;
            //start = mid + 1;
        }
        else
        {
            start = mid+1; 
            //end = mid - 1;
        }
    }
    return false;
}

int main()
{
    //int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
    //int n= 10;

    cout << isSquare(81);

    return 0;
}