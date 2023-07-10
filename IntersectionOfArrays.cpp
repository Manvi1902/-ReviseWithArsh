#include<iostream>
#include<vector>
using namespace std;


void intersectionOfArrays(int arr1[],int n, int arr2[] , int m){

int i=0;
int j=0;

while(i<n && j<m){

    if(arr1[i]<arr2[j])
     {
          i++;
     }
    else if(arr2[j]<arr1[i]){
          j++;
    }
    else
    {

        cout<<arr1[i]<<" ";
        i++;
        j++;
    }
}

}

void printIntersection(const vector<int>& intersection) {
    cout << "Intersection of the arrays: ";
    for (int i = 0; i < intersection.size(); i++) {
        cout << intersection[i] << " ";
    }
    cout << endl;
}


int main(){
int arr1[]={ 1, 3, 2, 3, 3, 4, 5, 5, 6 };
int arr2[]={ 1,3,6,8,9};

int n=sizeof(arr1)/sizeof(int);
int m=sizeof(arr2)/sizeof(int);

intersectionOfArrays(arr1, n, arr2, m);
return 0;
}
