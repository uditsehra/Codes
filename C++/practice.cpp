#include<iostream>
#include<algorithm>
using namespace std;

void getTripletPair(int arr[], int n, int target)
{
    //sort(arr, arr+n);
    int i=0, left=0, right=0;
    for(i=0; i<n-3; i++)
    {
        left = i+1;
        right = n-1;

        while(left<right)
        {
            int sum = arr[i] + arr[left] + arr[right];

            if(sum==target)
            {
                cout << arr[i] << ',' << arr[left] << " and " << arr[right]<<endl;
                left++;
            }
            else if(sum>target)
            {
                right--;
            }
            else//if(sum<target)
            {
                left++;
            }
        }
    }
}

int main() {
    int n = 4;
    //cin >> n;

    int arr[] = {2, 2, 2, 2};

/*    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }*/

    int target = 4;
//    cin >> target;

    sort(arr, arr+n);

    getTripletPair(arr, n, target);
    
    return 0;
}