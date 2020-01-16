#include<bits/stdc++.h>
using namespace std;

int getUnique(int arr[], int start, int end)
{

        if(start>end)
        {
            return -1;
        }

        int mid = (start + end)/2;
        
        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1])
        {

            return arr[mid];
        }
        
        if(arr[mid]==arr[mid+1])
        {
            int dist = mid - start;
/*           Distance is used to realize where our unique element will lie
            For example if we get arr[mid]==arr[mid+1] i.e. both are a pair
            and the length array from starting to mid is even it means that
            all the elements are existing in pair thats why we are taking & of distance with 1
            cause bitwise operators are the fastest     
            
 */            if(dist&1)
                return getUnique(arr, start, mid - 1);
            else
            {
                return getUnique(arr, mid + 2, end);
            }
            
        }

        if(arr[mid] == arr[mid-1])
        {
/*           Distance is used to realize where our unique element will lie
            For example if we get arr[mid]==arr[mid+1] i.e. both are a pair
            and the length array from starting to mid is even it means that
            all the elements are existing in pair thats why we are taking & of distance with 1
            cause bitwise operators are the fastest     
            
 */
            int dist = mid - start + 1;
            if(dist&1)
            {
                return getUnique(arr, start, mid - 2);
            }
            else{
                return getUnique(arr, mid + 1, end);
            }    
        }


    return -1;
} 

int main()
{
    int arr[] = {1,1,2,2,3,3,4,5,5};
    int n = 9;

    cout << getUnique(arr, 0, n);

    return 0;
}