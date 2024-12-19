#include <iostream>
using namespace std;
/*
ou are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
Input: nums = [1,1,2,3,3,4,4,8,8]

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.
*/

int findUniqueElement(vector<int>& v) {
    int s = 0, e = v.size() - 1;

    while (s < e) {
        int m = s + (e - s) / 2;

        // Ensure m is even (if odd, adjust to the left)
        if (m % 2 != 0) m--;

        // Check pairs
        if (v[m] == v[m + 1]) {
            // Single element is in the right half
            s = m + 2;
        } else {
            // Single element is in the left half (or is v[m])
            e = m;
        }
    }

    // 's' will point to the single element
    return v[s];
}

    int lengthOfLIS(vector<int>& nums) {
        // start from inc 
        // end from inc 
        int n = nums.size();
        int s=0;
        int e=n-1;
        int i;
        for( i=0;i<n;i++){
            if(nums[i+1]>nums[i]) break;
        }
        s=i;
        for(i=n-1;i>=0;i--){
            if(nums[i-1]<nums[i]) break;
        }
        e=i;

        while(s<e){
            
        }
    }


int main() {
vector<int> v = {1,1,2,2,3} ;
vector<int> v2 = {10,9,2,5,3,7,101,1} ;

            //   0 1 2 3 4 5 6 7 8 9 
            //   1,1,2,3,3,4,4,8,8 
int s=0;
int e = v.size()-1;
int m = s+(e-s)/2;
while(s<e){
if(m%2!=0 && m>0) m--;
if(v[m]>v[m-1])s=m+2;
else if(v[m]<v[m-1]) e=m;
else break;
m=s+(e-s)/2;
}

cout << v[s] <<endl;


cout <<findUniqueElement(v);
}