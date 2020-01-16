#include <iostream>
using namespace std;

int main()
{
    int n=13;
    int bit[8] = {0,0,0,0,1,1,0,1};
    int count=0;
    int arr[8]=0;
    for(int i=0; i<8; i++)
    {
        if(bit[i]^1)
            count++;
            arr[i] = bit[i]^1;
    }

    for(int i=0; i<8; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}

// array given 1,2,3,4,5,6,4,3,2,1
// all others are pairs you have to find out the unique pairs if you could.
