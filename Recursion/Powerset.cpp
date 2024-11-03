#include <iostream>
using namespace std ;

void find (int i , vector<int>& nums , vector<int>&v , vector<vector<int>>& ans) {
        ans.push_back(v);
        if(i==nums.size()) return ; 
        for(int j=i;j<nums.size();j++){
            v.push_back(nums[j]);
        find(j+1 , nums , v , ans );
           v.pop_back();
        }
}
 vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>v;
        vector<vector<int>> ans;
        find(0 , nums , v , ans );
        return ans;
    }

int main () {
vector<int> nums = {1,2,3};

vector<vector<int>> ans2 = subsets(nums);
for (int i=0;i<ans2.size();i++){
    for (int j=0;j<ans2[i].size();j++){
    cout <<ans2[i][j] <<" " ;
}
cout <<endl;
}
}