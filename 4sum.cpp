#include <iostream>
using namespace std;

    vector<vector<int>> fourSum(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        if (nums.size() < 4) return ans; 
        sort(nums.begin(),nums.end());
    for (int i=0;i<nums.size()-3;i++){
           if ( i>0 && nums[i]==nums[i-1])continue;
    for (int j=i+1;j<nums.size()-2;j++){
            if (j > i + 1 && nums[j] == nums[j-1]) continue;
int s=j+1;
int e=nums.size()-1;
while(s<e){
    long long sum = (long long)nums[i] + nums[j] + nums[s] + nums[e];
if(sum==k){
    ans.push_back({nums[i],nums[j],nums[s],nums[e]});
    s++;
    e--;
    while(s<e && nums[s]==nums[s-1]) s++;
    while(s<e && nums[e]==nums[e+1]) e--;
}
else if (sum>k) e--;
else s++;
}
}
}
return ans;
}


int main () {
        vector <int > v= {2,2,2,2,2};
int k=8;
vector<vector<int> > arr = fourSum(v,k);
 for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
        cout << arr[i][j] << " ";
    }
    cout << "\n";
    }
}