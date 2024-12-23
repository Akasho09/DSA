/*
Given two integer arrays nums1 and nums2, sorted in non-decreasing order, return the minimum integer common to both arrays. 
If there is no common integer amongst nums1 and nums2, return -1.

Note that an integer is said to be common to nums1 and nums2 if both arrays have at least one occurrence of that integer.
*/

#include <iostream>
using namespace std ;

    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        vector<int> nums4;
        if(nums1.size()>=nums2.size()){
            nums3=nums2;
            nums4=nums1;
        } else {
            nums3=nums1;
            nums4=nums2;
        }
    // nums3 iterate and nums4 binary search
        int s=0;
        int e=nums4.size()-1;
        int m ;
    for(int i=0;i<nums3.size();i++){
        while(s<=e){
            m=s+(e-s)/2;
            if(nums3[i]==nums4[m]) return nums3[i];
            else if(nums3[i]>nums4[m]) s=m+1;
            else e=m-1;
        }
        s=m;
    }
    return -1;
    }

int main ()  {

}