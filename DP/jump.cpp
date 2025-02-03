#include <iostream>
using namespace std;


class Solution {
public:
    bool canReach(int i, vector<int>& nums) {
        if (i >= nums.size() - 1) return true; 

        for (int j = 1; j <= nums[i]; j++) {
            if (canReach(i + j, nums)) return true;
        }

        return false; 
    }

    bool canJump(vector<int>& nums) {
        return canReach(0, nums);
    }
};

int main () {
    vector<int> v = {1,2,3};
cout << canJump(v);

}