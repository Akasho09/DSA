#include <iostream>
#include <vector>
using namespace std;

    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ans=0;
        for (int i=0;i<nums1.size();i++){
          for (int j=i+ans;j<nums2.size();j++){
         if (nums1[i]<=nums2[j]) {
            if ((j-i)>ans) ans=j-i;
            }
          else break;
        }
    }
    return ans;
    }

int main () {
vector<int> v;
v.push_back(55);
v.push_back(30);
v.push_back(5);
v.push_back(4);
v.push_back(2);

vector<int> v2;
v2.push_back(100);
v2.push_back(20);
v2.push_back(10);
v2.push_back(10);
v2.push_back(5);

cout << maxDistance(v,v2);
}