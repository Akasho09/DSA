#include <iostream>
using namespace std;
 int longestConsecutive(vector<int>& nums) {
 int maxsum=0;
 int maxc=0;
 int currc=0;
 int currsum=0;
 for (int i=0;i<nums.size();i++){
currsum+=nums[i];
    currc++;
 if(currsum>maxsum) {
    maxsum=currsum;
    maxc=currc;
 }
 if (currsum<0) {
    currsum=0; 
    currc=0;
}
}

    return maxc;
    }

    int main () {
        
    }