#include <iostream>
using namespace std ;
    int findMin(vector<int>& nums){
    int n = nums.size();
    if(n==1) return nums[0];
    int s=0;
    int e=n-1;
    int m;
    while(s<=e){
    m=s+(e-s)/2;
    if(nums[m]>nums[n-1]) s=m+1;
    else e=m-1;
    }
    // int left = (m > 0) ? nums[m - 1] : INT_MAX;
    int right = (m < n - 1) ? nums[m + 1] : INT_MAX;
    return min(nums[m], right);
    }

int main () {
    vector<int>v= {10,11,13,14};
    cout << findMin(v);
}