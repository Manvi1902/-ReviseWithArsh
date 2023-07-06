
#include<iostream>
using namespace std;

// case1--> odd length
// case2--> even length


void reverseArray(int arr1[],int n){

    int start=0;
    int End = n-1;

    while(start<=End){

        swap(arr1[start],arr1[End]);
        start++;
        End--;
    }

}

void printArray(int*arr1,int n){
    for(int i=0; i<n; i++){
        cout<<arr1[i]<<" ";
    }
}

int main(){

int arr1[]={1,2,3,4,5};
//int arr2[]={1,2,3,4,5,6};
int n = sizeof(arr1)/sizeof(int);

cout<<"Array before Reverse : ";
printArray(arr1,n);
reverseArray(arr1,n);

cout<<"\nArray After Reverse: ";
printArray(arr1,n);

return 0;
}
