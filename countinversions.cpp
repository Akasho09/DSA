#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int countinversions(vector <int> v,int size){
 int c=0;
for (int i=0;i<=size;i++){
for (int j=i+1;j<=size;j++){
    if (v[i]>v[j]){
c++;
    }
}
}
cout <<"c" <<c;
cout <<endl;
return c;
}

int countperms(vector<vector <int> > v ,int n ){
vector <int> v2;
int ans=0;
for (int i=0;i<n;i++){
v2.push_back(i); // v[i]=i; segmentation fault 
}
cout <<"v2[n-1]" <<v2[0];
cout <<endl;
do{
  int i;
for (i=0;i<v.size();i++){
    cout <<"v[i][1]" <<v[i][1] << " i= " << i ;
    cout <<endl;
if (v[i][1]==countinversions(v2,v[i][0])){
    continue;
}
else{
break;
}
}
if(i==v.size()) ans++;
cout <<"ans" <<ans;
cout <<endl;
} while(next_permutation(v2.begin(),v2.end()));

return ans;
}

int main (){
int n=3;
vector<vector<int> > requirements= {{2,2},{1,1},{0,0}};
cout <<countperms(requirements,n);

}