#include <iostream>
#include <vector>
using namespace std;

//??CHECK
//  vector<int> findMissingAndRepeatedValues(vector<vector<int> >& grid) {
//  vector<int>ans;
//   int n=grid[0].size();
//     vector<int> arr(n*n,0);
//      int sum=0;
//     for (int i=0;i<n;i++){
//             for (int j=0;j<n;j++){
//             sum+=grid[i][j];
//                 if(arr[grid[i][j]-1]==1){
// ans[0]=grid[i][j];
//                 }
//                 else{
//                     arr[grid[i][j]-1]=1;
//                 }
//             }
//         }
// sum-= ((n*n*n*n+n*n)/2);
// ans[1]=arr[0]-sum;

// return ans;
//     }

//SUMS OF MATRIX AND SQUARE SUM OF MATRIX
 vector<int> findMissingAndRepeatedValues(vector<vector<int> >& grid) {
     int n=grid[0].size();
  int x,y;
unsigned int s1=0;
unsigned ss1=0;
for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
s1+=grid[i][j];
ss1+= (grid[i][j]*grid[i][j]);
    }
}
int d1=s1-((n*n*n*n+n*n)/2);
int d2=ss1-((2*n*n*n*n*n*n+3*n*n*n*n+n*n)/6);
x=(d1+d2/d1)/2;
y=x-d1;

return {x , y};

}

// vector<int> findMissingAndRepeatedValues(vector<vector<int> >& grid) {
// int n=grid[0].size();
// int xr=0;
// int c=1;
// cout << "xr" <<xr <<endl;
// cout << "c" <<c <<endl;
// for (int i=0;i<n;i++){
// for (int j=0;j<n;j++){
// xr=xr^grid[i][j];
// xr=xr^c;
// c++;
// }
// }
// cout << "xr" <<xr <<endl;
// cout << "c" <<c <<endl;

// //xr ==1^5=4   0100
// int bitno=0;
// while(1){
//     if ( (xr & (1<<bitno))!=0){  // !=0 not ==1 
//         break;
//     }
//     else
//     bitno++;
// }
// cout << "xr" <<xr <<endl;
// cout << "c" <<c <<endl;
// cout << "bitno" <<bitno <<endl;

// int zero=0,one=0;
// c=n*n;
// for (int i=0;i<n;i++){
// for (int j=0;j<n;j++){
// if ( (grid[i][j] & (1<<bitno)) !=0){
// one=one^grid[i][j];
// }
// else
// zero=zero^grid[i][j];

// if ( (c & (1<<bitno)) !=0){
//    one=one^c;
//     c--;
// }
// else{
// zero=zero^c;
// c--;
// }
// }
// }
// cout << "xr" <<xr <<endl;
// cout << "c" <<c <<endl;
// cout << "bitno" <<bitno <<endl;
// cout << "zero" <<zero <<endl;
// cout << "one" <<one <<endl;

// c=0;
// for (int i=0;i<n;i++){
// for (int j=0;j<n;j++){
// if (grid[i][j]==one){
//     c++;
// }
// }
// }

// if (c==2)
// return {one,zero};
// else
// return {zero,one};
// }
int main () {

    vector<vector<int> > v = { {1, 2, 9} , {4, 5, 6} , {7,8,9} };
        vector<int>ans;
ans=findMissingAndRepeatedValues (v);
for (int i=0;i<ans.size();i++){
    cout <<ans[i];
}
}