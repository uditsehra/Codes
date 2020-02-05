#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int partition(int a[],int s,int e){
	int i=s-1;
	int j=s;
	int pivot=a[e];
	for(;j<e;j++){
		if(a[j]<=pivot){
			i++;
			swap(a[j],a[i]);
		}
	}
	swap(a[i+1],a[e]);
	return i+1;
}
void quicksort(int a[],int s,int e){
	if(s>=e){
		return;
	}
	srand(time(NULL));
	int random = s + rand() % (e - s);
	swap(a[random], a[e]);
	int p=partition(a,s,e);
	quicksort(a,s,p-1);
	quicksort(a,p+1,e);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
