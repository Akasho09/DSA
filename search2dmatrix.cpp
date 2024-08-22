#include <iostream>
#include <vector>
using namespace std;
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
int n=matrix.size();
int m=matrix[0].size();
    int s=0;
    int e=n*m-1;
int u=s+(e-s)/2;
while (s<=e){
    int element = matrix [u/m][u%m];
    if (element == target){
        return true ;
    }
else if (element <target){
s=u+1;
}
else {
    e=u-1;
}
u=s+(e-s)/2;
}
return false ; }


int main (){


   vector<vector<int> > v = { {1, 0, 3} , {4, 5, 6} };

 cout << searchMatrix (v,2);


}