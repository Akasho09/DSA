#include <iostream>
using namespace std ;

void find(vector<int> &nums ,vector<int>&v ,vector<int>&track ,vector<vector<int>>&ans ){
if(v.size()==nums.size()){
ans.push_back(v);
return ;
}

for (int j=0;j<nums.size();j++) {
    if(track[j]==0){
    v.push_back(nums[j]);
    track[j]=1;
    find(nums , v , track , ans ) ;
    v.pop_back();
    track[j]=0;
    }
}
}

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> v;
        vector<int> track={0};
        vector<vector<int>> ans;
        find(nums , v , track , ans ) ;
        return ans ;
    }

// TC = n! * n
// SC 
// void find(int i , vector<int>&nums , vector<vector<int>>&ans) {
//    if(i==nums.size()) {
//     ans.push_back(nums);
//     return ;
//    }

//    for(int j=i;j<nums.size();j++) {
//     swap(nums[i] , nums[j] );
//      find(i+1 , nums , ans ) ;
//     swap(nums[i] , nums[j] );
//    }
// }

//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<int> v;
//         vector<vector<int>> ans;
//         find(0 , nums , ans ) ;
//         return ans ;
//     }

int main () {

vector<int> candidates = {1,2,3};


vector<vector<int>> ans2 = permute(candidates);
for (int i=0;i<ans2.size();i++){
    for (int j=0;j<ans2[i].size();j++){
    cout <<ans2[i][j] <<" " ;
}
cout <<endl;
}

}