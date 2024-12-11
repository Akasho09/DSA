/*
Given an array of positive integers nums and a positive integer target, return the minimal length of a 
subarray
 whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.
*/

    int minSubArrayLen(int target, vector<int>& nums) {
        int ans =INT_MAX;
        int l=0;
        int r=0;
        int sum=nums[0];
        while(l<nums.size() && r<nums.size()){
        if(sum<target){
            r++;
            if(r<nums.size()) sum+=nums[r];
            else if(l==0) return 0;
        }
        else if(sum>=target){
        ans = min(ans,r-l+1);
        sum-=nums[l];
        l++;
        }
        }
        return ans ;
    }