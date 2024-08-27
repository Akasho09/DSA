#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
int i=0;
        while (i<nums.size()){
int j=i+1;
    while (j<nums.size()){
if (nums[j]==target-nums[i]){
return {i,j};
}
j++;
}
 i++;
}
 return {};
}

int main () {
    
}