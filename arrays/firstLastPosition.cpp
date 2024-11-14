#include <iostream>
using namespace std ;
    int find (vector<int>& nums, int target ,  bool first) {
        int n=nums.size();
        int s=0 ;
        int e= n-1 ;
        int ans =-1;
        while(s<=e){
        int m = s+(e-s)/2;
        if(nums[m]==target){
        ans=m;
        if(first) e=m-1;
        else s=m+1;
        }
        else if(nums[m]<target) s=m+1;
        else e=m-1;
        }        
        return ans ;
    }


    vector<int> searchRange(vector<int>& nums, int target) {
         
         int a =find(nums , target , true);
         int b = find(nums , target , false);
         return {a,b};
    }
int main () {

}