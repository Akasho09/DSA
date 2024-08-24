#include <iostream>
#include <vector>
using namespace std;
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        int count=0; int count2=0;
        int ans=INT_MIN; int ans2=INT_MIN;
        for(int i=0;i<nums.size();i++){
        if (count==0 && ans2!=nums[i]){
            ans=nums[i];
            count++;
        }
        else if (count2==0 && ans!=nums[i]){
ans2=nums[i];
count2++;
        }
        else if (nums[i]==ans) count++;
        else if (nums[i]==ans2) count2++;
        else {
            count--; count2--;
        }
        }
        count=0;count2=0;
        for(int i=0;i<nums.size();i++){
if(nums[i]==ans) count++;
if(nums[i]==ans2) count2++;
}
    int n=int(nums.size()/3);
    if(count>n) v.push_back(ans);
    if(count2>n) v.push_back(ans2);

    return v;
    }

    int main () {

vector<int> v;
vector<int> v2;
v.push_back(2);
v.push_back(7);
v.push_back(2);
v.push_back(3);
v.push_back(6);
v.push_back(1);
v.push_back(2);

v2=majorityElement(v);
for(int i=0;i<v2.size();i++)
cout <<v2[i];

}