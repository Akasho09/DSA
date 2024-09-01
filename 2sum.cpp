#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)  {
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
};
int main () {
    vector<int> v;
v.push_back(1);
v.push_back(5);
v.push_back(7);
v.push_back(6);
v.push_back(2);
v.push_back(3);
v.push_back(6);
v.push_back(4);
    Solution a; 
a.twoSum(v,4);
}