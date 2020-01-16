#include<bits/stdc++.h>
using namespace std;

int getBitsToNum(int arr[], int n)
{
    vector < vector <int> > bitArray;
    for(int i=0; i<n; i++)
   { 
       int a =arr[i];
       vector<int> bits;

        while(a!=0)
        {
            bits.push_back(a%2);
            a /= 2;
        }

        reverse(bits.begin() , bits.end());
        bitArray.push_back(bits);
        bits.clear();

   }

   for(int i=0; i<bitArray.size(); i++){
       for(int x: bitArray[i]){
           cout << x;
       }
       cout << "\n";
   }
    return 1;
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int n = sizeof(arr)/sizeof(arr[0]);

    getBitsToNum(arr, n);

    return 0;
}