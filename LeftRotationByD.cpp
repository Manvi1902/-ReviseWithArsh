#include<iostream>
#include<algorithm>
using namespace std;
//optimal solution

void leftRotation(int arr[], int n, int d){

reverse(arr,arr+d);
reverse(arr+d,arr+n);
reverse(arr,arr+n);

}

int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int n = sizeof(arr)/sizeof(int);

cout<<"Enter the value of d: ";
int d;
cin>>d;

leftRotation(arr,n,d);

for(int i=0; i<n; i++){
cout<<arr[i]<<" ";
}
return 0;
}