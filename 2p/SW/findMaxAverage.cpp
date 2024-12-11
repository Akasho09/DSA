/*
You are given an integer array nums consisting of n elements, and an integer k.

Find a contiguous subarray whose length is equal to k that has the maximum average value and 
return this value. 
Any answer with a calculation error less than 10-5 will be accepted.

*/

#include <iostream>
using namespace std ;

    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0;
        double ans=0;
        for(int i=0;i<k;i++) {
            avg+=nums[i];
        }
        ans=avg;
        for(int i=k;i<nums.size();i++){
            avg+=(nums[i]-nums[i-k]);
            if(avg>ans){
                ans=avg;
            }
        }
return ans/double(k) ;
    }



int main () {
vector<int> nums= {0,4,0,3,2};
cout << findMaxAverage(nums,1);

}