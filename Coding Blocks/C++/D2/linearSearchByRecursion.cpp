// Program to do linear search using recursion.

#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int si, int number)
{
        int last;
        if(si==n)
        {
            return false;
        }
        
        if(arr[si]==number)
        {
            cout << "No is found at Index\t"<< si+1 << endl;
        }
        
        int recursionResult = linearSearch(arr, n, si+1, 2);
        return recursionResult;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,2,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    linearSearch(arr, n, 0,2);

    return 0;
}
