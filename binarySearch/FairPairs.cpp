#include <iostream>
using namespace std;
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int s=i+1;
            int e=nums.size()-1;
            int m;
            while(s<=e){
                m=s+(e-s)/2;
                if(nums[m]+nums[i]>=lower) e=m-1;
                else s=m+1;
            }
            int l=m;
           s=m;
           e=nums.size()-1;
             while(s<=e){
                  m=s+(e-s)/2;
                if(nums[m]+nums[i]<=upper) s=m+1;
                else e=m-1;
            }
        cout <<l <<" " <<m <<endl;
        ans+=(m-l+1);
        }
        return ans;
    }

int main() {
vector<int>v = {1,2,5,5,5,5,5,5,5,5,6,7,9};
    countFairPairs(v,10,11);
}