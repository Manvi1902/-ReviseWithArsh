#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> setZeroMatrix(vector<vector<int>> &matrix, int n, int m){

int col0 = 1;
int i,j;

for(i=0; i<n; i++){

    for(j=0; j<m; j++){
        if(matrix[i][j] == 0){

            //mark the ith row
            matrix[i][0] =0;

            //mark the jth col
            if(j!= 0)
                matrix[0][j]=0;
            else
                col0 = 0;

        }
    }
}

for(i=1; i<n; j++){

    for(j=1; j<n; j++){

        if(matrix[i][j] !=0 ){
            //check for col & row
            if(matrix[0][j] == 0 || matrix[i][0] == 0){
                matrix[i][j]=0;
            }
        }
    }
}
if(matrix[0][0] == 0){
    for(int j=0; j<m; j++)
        matrix[0][j] = 0;
}
return matrix;

}

void printMatrix(vector<vector<int>> &matrix, int n, int m)
{
 for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 3; // number of rows
    int m = 3; // number of columns

    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    // Calling the setZeroMatrix function
       matrix = setZeroMatrix(matrix, n, m);

    // Printing the modified matrix
        printMatrix(matrix, n, m);
    return 0;
}
