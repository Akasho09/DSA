void find ( vector<int>& nums , vector<vector<int>>& ans , vector<int>& v , vector<int>& track) {
if(v.size()==nums.size()){
    ans.push_back(v);
    return ;
}

for(int j=0;j<nums.size();j++) {
        if((j>0 && nums[j]==nums[j-1] && !track[j - 1])) continue ;
if(track[j]==0 ){
    track[j]=1;
    v.push_back(nums[j]);
    find(nums , ans , v , track) ;
    v.pop_back();
    track[j]=0;
}
}
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans ;
        sort(nums.begin(), nums.end());
        vector<int> v ;
        vector<int> track(nums.size(),0);
        find(nums , ans , v , track) ;
        return ans ;
    }