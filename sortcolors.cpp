#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int>& nums) {
int low,high;
low=0;
high=nums.size()-1;
for (int i=0;i<=high;i++){
    if (nums[i]==0){
        swap(nums[low],nums[i]);
        low++;
    }
else if (nums[i]==2){
    swap(nums[high],nums[i]);
    high--;
    i--;
}
}
}
int main (){
vector<int> v;
v.push_back(1);
v.push_back(0);
v.push_back(2);
v.push_back(0);
v.push_back(1);
v.push_back(1);
v.push_back(1);
v.push_back(2);
v.push_back(1);

sortColors (v);
    for (int i = 0; i < v.size(); i++) { 
            cout << v[i] << " "; 
        cout << endl; 
    }
}