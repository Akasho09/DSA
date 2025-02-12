#include <iostream>
using namespace std;

bool compare(int a, int b) {
    string sa = to_string(a);
    string sb = to_string(b);

    // strings can be compared direcrly
    if((sa + sb )> (sb + sa)){
        cout << sa + sb <<" : " <<typeid(sa+sb).name() <<endl;
        return true;
    }
    return false;
}

 string largestNumber(vector<int>& nums) {
        // Sort using the custom comparator
        sort(nums.begin(), nums.end(), compare);

        if (nums[0] == 0) {
            return "0";
        }

        string ans = "";
        for (int num : nums) {
            ans += to_string(num);
        }

        return ans;
    }
int main() {
    vector<int> v = {1,2,3,9,4};
    largestNumber(v);
}