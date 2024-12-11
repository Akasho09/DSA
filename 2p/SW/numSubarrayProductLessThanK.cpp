/*
Given an array of integers nums and an integer k, return the number of contiguous 
subarrays where the product of all the elements in the subarray is strictly less than k.
*/

#include <iostream>
using namespace std ;

    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int l=0 , r=0;
        int m=1;
        int ans=0;
        for(;r<n;++r){
            m*=nums[r];
            while(m>=k && l<=r){ // shrink window from left if m>=k
                m/=nums[l];
                l++;
            }
            ans+=(r-l+1);
        }
        return ans ;
    }

int main () {
    vector<int>v ={10,5,2,6};
    cout <<numSubarrayProductLessThanK(v,100) ;
    
    }