#include <iostream>
#include <vector>
using namespace std;

//brute
    int reversePairs(vector<int>& nums) {
        int ans=0;
        int q;
        int r;
        vector<int> v2;
        v2=nums;
        sort(v2.begin(),v2.end());
for (int i=0;i<nums.size()-1;i++){
for (int j=v2.size()-1;j>i;j--){
cout << i << "  " <<j <<"  "  <<r <<endl;
if (v2[j]>0 && nums[i]>0){
q=nums[i]/abs(v2[j]);
r=nums[i]%v2[j];
if (q>2) ans++;
else  if (q==2 && r>0) ans++;
else break;
}
else if (nums[i]>=0 && v2[j]<0){
    ans++;
}
else if (nums[i]<0 && v2[j]<0){
    r=abs(nums[i])/abs(v2[j]);
    if(r<2) ans++;
    else break;
}
else if (v2[j]==0 && nums[i]>0) ans++;
else break;
}
}
    return ans;
}


int main() {
    vector<int> v;
// v.push_back(2147483647);
// v.push_back(2147483647);
// v.push_back(-2147483647);
// v.push_back(-2147483647);
// v.push_back(-2147483647);
v.push_back(1);
v.push_back(3);
v.push_back(2);
v.push_back(3);
v.push_back(1);
cout << reversePairs(v);

}