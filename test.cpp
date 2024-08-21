#include <iostream>
#include <vector>
using namespace std;
void findMissingAndRepeatedValues(vector<vector<int> >& grid) {
int n=grid[0].size();
int xr=0;
int c=1;
cout << "xr" <<xr <<endl;
cout << "c" <<c <<endl;
for (int i=0;i<n;i++){
for (int j=0;j<n;j++){
xr=xr^grid[i][j];
xr=xr^c;
c++;
}
}
cout << "xr" <<xr <<endl;
cout << "c" <<c <<endl;

//xr ==1^5=4   0100
int bitno=0;
while(1){
    if ( (xr & (1<<bitno))!=0){  // !=0 not ==1 
        break;
    }
    else
    bitno++;
}
cout << "xr" <<xr <<endl;
cout << "c" <<c <<endl;
cout << "bitno" <<bitno <<endl;

int zero=0,one=0;
c=n*n;
for (int i=0;i<n;i++){
for (int j=0;j<n;j++){
if ( (grid[i][j] & (1<<bitno)) !=0){
one=one^grid[i][j];
}
else
zero=zero^grid[i][j];

if ( (c & (1<<bitno)) !=0){
   one=one^c;
    c--;
}
else{
zero=zero^c;
c--;
}
}
}
cout << "xr" <<xr <<endl;
cout << "c" <<c <<endl;
cout << "bitno" <<bitno <<endl;
cout << "zero" <<zero <<endl;
cout << "one" <<one <<endl;

c=0;
for (int i=0;i<n;i++){
for (int j=0;j<n;j++){
if (grid[i][j]==one){
    c++;
}
}
}

if (c==2)
cout <<one <<"  "  <<zero ;
else
cout <<zero <<"  "  <<one ;
}
int main () {

    vector<vector<int> > v = { {1, 2, 9} , {4, 5, 6} , {7,8,9} };
        vector<int>ans;
findMissingAndRepeatedValues (v);

}