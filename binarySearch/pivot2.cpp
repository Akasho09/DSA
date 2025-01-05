#include <iostream>
using namespace std ;
// search also 
// 
    bool search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int m = s+(e-s)/2;
        while(nums[s]==nums[s+1] && s<=e) {
            if(nums[s]==target) return true;
            s++;
        }
        while(nums[e]==nums[e-1] && s<=e){
            if(nums[e]==target) return true;
            e--;
        }
        cout <<s <<e <<m <<endl;
        while(s<=e){
        m=s+(e-s)/2;
        if(nums[m]==target) return true;
        if(nums[m]<nums[m-1]) break;
        else if(nums[m]>=nums[0]) s=m+1;
        else e=m-1;
        }
        cout <<s <<e <<m <<endl;
        if(target>nums[m] && s<=e){
            s=m;
            e=nums.size()-1;
        } else if (s<=e){
            s=0;
            e=m-1;
        }
        cout <<s <<e <<m <<endl;

        while(s<=e){
            m=s+(e-s)/2;
            if(nums[m]==target) return true;
            else if(nums[m]>target) e=m-1;
            else s=m+1;
        }
        cout <<s <<e <<m <<endl;
        return false ;   
    }

int main () {
    vector<int> n = {11,11,11,11,11,11,11,11,12,13,1,2,3,4,5,5,6,7,7,7,7,7,7,7,7,7,7,7,8,9,10,11};
    search(n,8);
}