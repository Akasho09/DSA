#include <iostream>
using namespace std ;
    int findMin(vector<int>& nums){
    int n = nums.size();
    if(n==1) return nums[0];
    int s=0;
    int e=n-1;
    int a = INT_MAX;
    while(nums[s]==nums[e] && s<=e) {
    a=min(a,nums[s]);
    n=e;
    e--; s++;
    }
    int m=s+(e-s)/2;
    while(s<=e){
    m=s+(e-s)/2;
    if(nums[m]>nums[n-1]) s=m+1;
    else e=m-1;
    }
    n=nums.size();
    int left = (m > 0) ? nums[m - 1] : INT_MAX;
    int right = (m < n - 1) ? nums[m + 1] : INT_MAX;
    return min({nums[m],right,left,a});
    }

int main () {
    vector<int>v= {2,2,2,0,0,0,1,1,2,2};
    cout << findMin(v);
}