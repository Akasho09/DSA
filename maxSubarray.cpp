#include <iostream>
#include <vector>
using namespace std;

int main (){
vector<int> v;
v.push_back(5);
v.push_back(4);
v.push_back(-1);
v.push_back(7);
v.push_back(8);

int sum=0;
int ans=0;
for (int i=0;i<v.size();i++){
if (sum>sum+v[i]){
    //v[i] is -ve
    if (v[i]>sum+v[i]) // sum is also -ve 
sum=v[i];
 else if(sum+v[i]>0){
        if(sum>ans){
            ans=sum;
        }
sum+=v[i]; // 
}
}
else {
    if (v[i]>sum){
sum=v[i];
    }
    else if(sum+v[i]>0){
        if(sum>ans){
            ans=sum;
        }
sum+=v[i];
}
else
sum=0;

cout << ans <<endl;

}
  if(sum>ans){
            ans=sum;
        }
        cout << ans <<endl;

}

}



/*
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int csum=0;
    int sum=nums[0];
    int ans=nums[0];
     for(int i=0;i<nums.size();i++){
    csum+=nums[i];
    if (csum>=nums[i]){
        sum=csum;
        if(sum>=ans){
        ans=sum; 
        }
    }
    else {
    csum=nums[i];
    sum=0;
    if(nums[i]>ans){
    ans=nums[i];
    }
    }
    }
    return ans;
    }
};
*/