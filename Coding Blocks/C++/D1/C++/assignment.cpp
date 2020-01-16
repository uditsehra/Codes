// Find unpaired elements or unique elements. for a given array (1,2,4,3,5,6,3,3,1,4)

#include<iostream>
#include<unordered_map>
using namespace std;

int getUnique(int arr[], int n)
{
    unordered_map<int,int> elements;
    for(int i=0; i<n; i++)
    {
        elements[arr[i]]++;
    }


    for(auto it: elements)
    {
        if ( it.second == 1)
            cout << it.first << endl;
    }
    return 1;
}

int main()
{
    int arr[10] = {1,2,4,3,5,6,2,1,3,4};
    int n=10;

    getUnique(arr, n);

    return 0;
}
