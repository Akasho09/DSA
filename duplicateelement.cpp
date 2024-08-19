#include <iostream>
#include <vector>
using namespace std;

    int findDuplicate(vector<int>& nums) {
    /*    sort(nums.begin(),nums.end());
        int n=nums.size();
        int s=0,e=n-1;int ans;
        int m=s+(e-s)/2;
        while(s<=e){
        if(nums[m]<=m+1){
        if (nums[m]==nums[m+1] || (n>2) && (nums[m]==nums[m-1])){
   ans=nums[m];
     break;
        }
        e=m-1;
        }
        else {
s=m+1;
    }
    m=s+(e-s)/2;
    }
        return ans; */
int n=nums.size();
int s=0;
for (int i=0;i<n;i++){
s+=nums[i];
}
return s-(n*n-n)/2;
 }

// //floyds cycle
// int slow=nums[0];
// int fast=nums[0];
// do{
//     slow=nums[slow];
//     fast=nums[nums[fast]];
// }while(slow!=fast) ;

// fast=nums[0];
// while(slow!=fast){
//     slow=nums[slow];
// fast=nums[fast];
// }
// return slow;
// }

int main () {
vector<int> v;
v.push_back(1);
v.push_back(5);
v.push_back(7);
v.push_back(6);
v.push_back(2);
v.push_back(3);
v.push_back(6);
v.push_back(4);
cout << findDuplicate(v);
}