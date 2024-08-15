#include <iostream>
#include <vector>
using namespace std;

    void setZeroes(vector<vector<int> >& matrix) {
int col0=1;
int rows = matrix.size();
int cols = matrix[0].size();
for (int i=0;i<rows;i++){
    for (int j=0;j<cols;j++){
     if (matrix[i][j]==0){
        matrix[i][0]=0;
 if (j==0){
               col0=0;
        }
        else{
             matrix[0][j]=0; 

        }
            }
    }
}

for (int i=1;i<rows;i++){
    for (int j=1;j<cols;j++){
        if (matrix[i][j]!=0){
    if (matrix[i][0]==0  || matrix[0][j]==0 ){
matrix[i][j]=0;
    }}
    }}

// FIRST ALONG ROW 
if (matrix[0][0]==0){
        for (int i=0;i<cols;i++){
        matrix[0][i]=0;
    }
}
if (col0==0){
        for (int j=0;j<rows;j++){
        matrix[j][0]=0;
    }
}
}

int main (){

    vector<vector<int> > v = { {1, 0, 3} , {4, 5, 6} };

 setZeroes (v);
    for (int i = 0; i < v.size(); i++) { 
            for (int j = 0; j < v[0].size(); j++) { 

            cout << v[i][j] << " "; 
        cout << endl; 
    }

    }
}

// g++ -std=c++11 setmatrixzero.cpp -o a