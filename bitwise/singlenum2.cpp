#include <iostream>
using namespace std ;
     // bitwise check bits nums of all nums if %3==1 => ans=ans+2^i

     
int singleNumber2(vector<int>& nums) {
int n =nums.size();
int ones =0;
int twos=0;
for (int i=0 ;i<n ;i++) {
ones = (ones ^nums[i])&(~twos);
twos = (twos ^ nums[i])&(~ones);
}
return ones;
    }

int singleNumber21(vector<int>& nums) {
            int n =nums.size();
        sort (nums.begin(), nums.end()) ;
        for(int i=1; i<n;i+=3){
         if(nums[i]!=nums[i-1]){
            return nums[i-1];
         }
        }
        return nums[n-1];
        }

int main () {

}