class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3) return 0;
        int l=0;
        int ans = 0;
        while(l<nums.size()-2){
            int r=l+2;
            int d = nums[l+1]-nums[l];               
            if(nums[l+2]-nums[l+1]==d) {
                ans++;
                r++;
                while(r<nums.size()){
                    if(nums[r]-nums[r-1]==d) {
                        ans++; 
                        r++;
                    }
                    else break;
                }
            }
            l++;
        }
        return ans ;
    }
};