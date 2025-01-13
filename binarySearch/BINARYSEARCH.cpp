#include <iostream>
using namespace std;

    int search(vector<int>& nums, int target) {
    int s=0;
    int e=nums.size()-1;
    int m;
    while(s<e){
        m=s+(e-s)/2;
        if(nums[m]>target) e=m-1;
        else s=m+1;
    }    
    cout<< s <<m <<e <<endl;
    return m;
    }
int main() {
    vector<int> z={-1,0,3,5,9,12};
    search(z,-1);
    search(z,1);
    search(z,2);
    search(z,3);
    search(z,5);
    search(z,6);
    search(z,9);
    search(z,12);
    search(z,14);

}