/*
QuickSort using Random Pivoting
In this article we will discuss how to implement QuickSort using random pivoting. In QuickSort we first partition the array in place such that all elements to the left of the pivot element are smaller, while all elements to the right of the pivot are greater that the pivot. Then we recursively call the same procedure for left and right subarrays.

Unlike merge sort we don’t need to merge the two sorted arrays. Thus Quicksort requires lesser auxiliary space than Merge Sort, which is why it is often preferred to Merge Sort.Using a randomly generated pivot we can further improve the time complexity of QuickSort.

We have discussed at two popular methods for partitioning the arrays-Hoare’s vs Lomuto partition scheme
It is advised that the reader has read that article or knows how to implement the QuickSort using either of the two partition schemes.



Algorithm for random pivoting using Lomuto Partitioning


partition(arr[], lo, hi) 
    pivot = arr[hi]
    i = lo     // place for swapping
    for j := lo to hi – 1 do
        if arr[j] <= pivot then
            swap arr[i] with arr[j]
            i = i + 1
    swap arr[i] with arr[hi]
    return i

partition_r(arr[], lo, hi)
    r = Random Number from lo to hi
    Swap arr[r] and arr[hi]
    return partition(arr, lo, hi)

quicksort(arr[], lo, hi)
    if lo < hi
        p = partition_r(arr, lo, hi)
        quicksort(arr, p-1, hi)
        quicksort(arr, p+1, hi)
 
Algorithm for random pivoting using Hoare Partitioning

partition(arr[], lo, hi)
   pivot = arr[lo]
   i = lo - 1  // Initialize left index
   j = hi + 1  // Initialize right index

   // Find a value in left side greater
   // than pivot
   do
      i = i + 1
   while arr[i]  pivot

   if i >= j then 
      return j

   swap arr[i] with arr[j]
   
partition_r(arr[], lo, hi)
    r = Random number from lo to hi
    Swap arr[r] and arr[lo]
    return partition(arr, lo, hi)

quicksort(arr[], lo, hi)
    if lo < hi
        p = partition_r(arr, lo, hi)
        quicksort(arr, p, hi)
        quicksort(arr, p+1, hi)
        


*/


/* C++ implementation QuickSort using Lomuto's partition 
   Scheme.*/
#include <cstdlib> 
#include <iostream> 
using namespace std; 
  
/* This function takes last element as pivot, places 
  the pivot element at its correct position in sorted 
  array, and places all smaller (smaller than pivot) 
  to left of pivot and all greater elements to right 
  of pivot */
int partition(int arr[], int low, int high) 
{ 
    int pivot = arr[high]; // pivot 
    int i = (low - 1); // Index of smaller element 
  
    for (int j = low; j <= high - 1; j++) { 
  
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) { 
  
            i++; // increment index of smaller element 
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
} 
  
// Generates Random Pivot, swaps pivot with 
// end element and calls the partition function 
int partition_r(int arr[], int low, int high) 
{ 
    // Generate a random number in between 
    // low .. high 
    srand(time(NULL)); 
    int random = low + rand() % (high - low); 
  
    // Swap A[random] with A[high] 
    swap(arr[random], arr[high]); 
  
    return partition(arr, low, high); 
} 
  
/* The main function that implements QuickSort 
arr[] --> Array to be sorted, 
low --> Starting index, 
high --> Ending index */
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) { 
  
        /* pi is partitioning index, arr[p] is now 
        at right place */
        int pi = partition_r(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int arr[] = { 10, 7, 8, 9, 1, 5 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    quickSort(arr, 0, n - 1); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
}