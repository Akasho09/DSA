#include <iostream>
using namespace std ;
    int findMin(vector<int>& nums){
    int n = nums.size();
    if(n==1) return nums[0];
    int s=0;
    int e=n-1;
    int m ; 
    while(s<=e){
    m=s+(e-s)/2;
    if(nums[m]>nums[n-1]) s=m+1;
    else e=m-1;
    }
    cout <<m <<endl;
    if(m==0){
        return min(nums[0],nums[1]);
    } else if(m==n-1){
        return min(nums[m],nums[m-1]);
    } else {
        return min((nums[m-1],nums[m]),nums[m+1]);
    }
    }

int main () {
    vector<int>v= {11,13,15,17};
    cout << findMin(v);
}