#include <iostream>
using namespace std;
// 2,3,4,4,5,6,7,8
int triangleNumber(vector<int>& nums) {
    // Sort the array to simplify the triangle condition
    sort(nums.begin(), nums.end());
    int ans = 0;
    int n = nums.size();

    // Iterate for every potential 'k' as the longest side
    for (int k = n - 1; k >= 2; k--) {
        int i = 0, j = k - 1;
        while (i < j) {
            if (nums[i] + nums[j] > nums[k]) {
                // If nums[i] + nums[j] > nums[k], then all pairs (i, j-1), (i, j-2), ..., (i, i+1) also satisfy this condition
                ans += (j - i);
                j--; // Reduce the higher index
            } else {
                i++; // Increase the lower index to check for larger numbers
            }
        }
    }
    return ans;
}

int main () {
vector<int> v ={2,2,3,4};
cout <<triangleNumber(v) <<endl;

}