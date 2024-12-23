#include <iostream>
using namespace std;

    int minLengthAfterRemovals(vector<int>& nums) {
        int n= nums.size();
        int s=n/2-1; 
        int e=n-1;
        while(s>=0){
            if(nums[e]>nums[s]){
                n-=2;
                e--;
            } 
            s--;
        }
        return n;
    }

int main () {

}