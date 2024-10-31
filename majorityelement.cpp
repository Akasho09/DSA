//MOORES VOTING ALGORITHM
#include <iostream>
#include <vector>
using namespace std;

    int majorityElement(vector<int>& nums) {
    int ans=nums[0];
    int count =1;
    for (int i=1;i<nums.size();i++){
if(count>0){
    if(nums[i]==ans){
        count++;
    }
    else
    count--;
}
else
{
ans=nums[i];
count=1;
}
    }
return ans;
    }

int main () {

vector<int> v;
v.push_back(1);
v.push_back(7);
v.push_back(1);
v.push_back(1);
v.push_back(3);
v.push_back(6);
v.push_back(1);
cout << majorityElement(v);

}