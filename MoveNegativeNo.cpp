//Moving all negative numbers Left side and Positive element on right side of given array
//method- two pointer approach
#include<iostream>
#include<algorithm>
using namespace std;

void moveNegativeEle(int arr[],int left, int right){

    while(left<=right){


        if(arr[left]<0 && arr[right]<0)
        {       left +=1;             }
         else if(arr[left]>0 && arr[right]<0)
        {
             swap(arr[left],arr[right]);
             left +=1;
             right -=1;
        }
        else if(arr[left]>0 && arr[right])
        {       right -=1;               }

        else
        {    left +=1;
             right -=1;
        }

    }

}

void printArray(int arr[], int n){

for(int i=0; i<=n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

int main(){

int arr[] = {-12,8,1,-2,11, -13, -5,10,6};
int n = sizeof(arr)/sizeof(arr[0]);

moveNegativeEle(arr,0,n-1);
printArray(arr,n-1);

return 0;
}
