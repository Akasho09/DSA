class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        set<int> set(nums.begin(),nums.end());
        if(valueDiff==0 and nums.size()==set.size()) return false;
        int l=0;
        while(l<nums.size()-1){
            int r = 1;
            while(r<=indexDiff && r<nums.size()-l){
                if(abs(nums[l]-nums[l+r])<=valueDiff){
                    return true ;
                }
                r++;
            }
            l++;
        }
        return false ;
    }
};