#include <iostream>
using namespace std;

    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int ans=0;
        int zeroes=0;
        while(r<nums.size()){
            if(nums[r]==0) zeroes++;
        while(zeroes>k){
            if(nums[l]==0) zeroes--;
            l++;
        }
        ans=max(ans,r-l+1);
        r++;
        }    
        return ans ;
}

int main() {

}