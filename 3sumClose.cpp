#include <iostream>
using namespace std;
    int threeSumClosest(vector<int>& nums, int target) {
    int ans;
    int diff=INT_MAX;
    sort(nums.begin(),nums.end());

    for (int i=0;i<nums.size()-1;i++) {
    int s=i+1;
    int e=nums.size()-1;
    while(s<e){
        int sum=nums[s]+nums[e]+nums[i];
        int newdiff=abs(sum-target);
if(newdiff<diff) {
diff=newdiff;
ans=sum;
    }
        if(sum-target>0) {
            e--;
        }
        else if(sum<target){
            s++;
        }
        else {
         return target;
        }
    }
    }
return ans;
    }
int main ( ) {
vector <int > v= {4,0,5,-5,3,3,0,-4,-5};
int t=-2;
cout <<threeSumClosest(v,t);
}