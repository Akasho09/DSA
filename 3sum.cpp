#include <iostream>
#include <vector>
using namespace std;
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
int n=nums.size();
sort (nums.begin(),nums.end());
for (int i=0;i<nums.size();i++){
    if ( i>0 && nums[i]==nums[i-1]){
continue;
    }
    int s=i+1;
    int e=n-1;
    while(s<e){
if (nums[s]+nums[e]+nums[i]==0){
v.push_back({nums[i],nums[s],nums[e]});
s++;
e--;
while ( s<e && nums[s]==nums[s-1]) s++; // s & s-1
while ( s<e && nums[e]==nums[e+1]) e--; // e & e+1
}
else if (nums[s]+nums[e]+nums[i]>0){
    e--;
}
else
s++;
    }
}
return v;
    }

    int main () {
        vector <int > v= {-1,0,1};
        vector <vector <int > > v2;
v2=threeSum(v);
for (int i=0;i<v2.size();i++){
    for (int j=0;j<v2[i].size();i++){
    cout <<v2[i][j] <<" " ;
}

}}




