// Program to get unique pairs or unique elements using bit manipullation

#include<iostream>
using namespace std;

int unique(int arr[], int n)
{
    int XorPair = arr[0];

    for(int i=1; i<n; i++)
    {
        XorPair ^= arr[i];
    }

    if(XorPair==0)
    {
        return 0;
    }

    int var = XorPair;

    int position = 0;

    while(true)
    {
        if(var&1)
        {
            break;
        }
        position++;
        var = var>>1;
    }

    int check = XorPair;

    for(int i=0; i<n; i++)
    {
        int element = (arr[i]>>position);

        if(element&1==1)
        {
            check = check^arr[i];
        }
    }

    cout << check << endl;

    return 1;
}

int uniqueNumberTriplet(int arr[], int n)
{
    int bitAdder[32] = {0};

    for(int i=0; i<n; i++)
    {
        int var = arr[i];

        for(int j=31; j>0; j--)
        {
            bitAdder[j] += (var&1);
            var = var>>1;
        }
    }

    int decimal = 0;

    int multiply = 1;

    for(int i=31; i>=0; i--)
    {
        bitAdder[i] = bitAdder[i]%3;

        decimal = decimal + multiply*bitAdder[i];

        multiply = multiply<<1;
    }

    cout << "Unique value is " << decimal << endl;
}

int main()
{
    int arr[] = {1,2,3,4,6,5,7,1,2,3,4};
    int n=11;
    cout << unique(arr, n)<< endl;

   /*  int arr[] = {1,2,3,5,1,2,3,1,2,3};
    int n=10;
    uniqueNumberTriplet(arr, n); */

    return 0;
}
