//Finding Kth max-min element in the given array

#include<iostream>
#include <algorithm>
using namespace std;

int kthMinElement(int*arr,int n,int k){

    sort(arr,arr+n); // sorting the array
    return arr[k-1];
}

int kthMaxElement(int*arr,int n,int k){
sort(arr, arr + n, greater<int>()); // Sorting the array in descending order
    return arr[k - 1];
}

int main(){

int arr[]={7,10,4,3,20,15};
int n= sizeof(arr)/sizeof(int);
int k;

cout<<"Enter the Kth element u want to search: ";
cin>>k;

cout<<"Smallest Element is :"<<kthMinElement(arr,n,k)<<endl;
cout<<"Largest Element is :"<<kthMaxElement(arr,n,k)<<endl;

return 0;

}


