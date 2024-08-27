#include <iostream>
#include <vector>
using namespace std;

//brute
   int reversePairs(vector<int>& nums) {
        int ans=0;
                int r;
        for (int i=0;i<nums.size()-1;i++){
            for (int j=i+1;j<nums.size();j++){
        r=nums[i]/nums[j];
       if(nums[i]>0 && nums[j]>0 ) {
         if(nums[i]%nums[j]==0){
    if(r>2){
ans++;
}
}
else
if(r>=2) ans++;
        cout <<"loop" <<1 <<" " <<nums[i] << " " <<nums[j] << " " << " ans  " <<ans <<endl;

    }
       else if (nums[i]>0 && nums[j]<0) {
        ans++;
        cout <<"loop" <<2 <<" " <<nums[i] << " " <<nums[j] << " " << " ans  " <<ans <<endl;
        continue; }
       else if (nums[i]<0 && nums[j]>0) {
        cout <<"loop" <<3 <<" " <<nums[i] << " " <<nums[j] << " " << " ans  " <<ans <<endl;
continue;}
       else {
       if(r<=2) ans++;
        cout <<"loop" <<4 <<" " <<nums[i] << " " <<nums[j] << " " << " ans  " <<ans <<endl;
    }
    }
        }
            return ans;
    }



int main() {
    vector<int> v;
v.push_back(2147483647);
v.push_back(2147483647);
v.push_back(-2147483647);
v.push_back(-2147483647);
v.push_back(-2147483647);
v.push_back(2147483647);
    cout << reversePairs(v);


}