#include<iostream>
#include<unordered_map>
using namespace std;

int getUnique(int arr[], int n)
{
    unordered_map<int, int> elements;

    for(int i=0; i<n; i++)
    {
        elements[arr[i]]++;
    }

    for(auto it : elements)
    {
        if(it.second == 1)
            cout << it.first << endl;
    }

    return 1;
}

int main() 
{
    int arr[] = {1,2,3,4,5,6,1,2,3,4};
    int n = 10;

    getUnique(arr, n);

    return 0;
}