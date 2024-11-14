#include <iostream>
using namespace std ;
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if (nums.size()==0) return 0;
        int ans = 1;
        int count = 1;
        int last=nums[0];
        for(int i=1;i<nums.size();i++){
        cout << last <<"   " <<count <<endl;
        if(nums[i]==(last+1)) {
        count++;
        last=nums[i];
        }
        else if(nums[i]!=last) {
        if(count>ans) ans=count;
        count=0;
        last=nums[i];
        }
        }
                if(count>ans) ans=count;
                return ans ;
        }
int main () {

vector<int>v = {9,1,4,7,3,-1,0,5,8,-1,6} ;
longestConsecutive(v);
}