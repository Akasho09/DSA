#include <iostream>
using namespace std ;

bool find (int i , int a1 , int s , vector<int>& nums , int sum){
     if ((a1/s)==((sum-a1)/(nums.size()-s))){ return true ;}
   
       if (i >= nums.size()) return false;
    if (find(i + 1, a1 + nums[i], s + 1, nums, sum)) {
        return true;
    }
        if (find(i + 1, a1, s, nums, sum)) {
        return true;
    }

   return false ;
 }

    bool splitArraySameAverage(vector<int>& nums) {
        bool ans ;
        int sum=0;
        for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        }
        int a1=0;
        int s1=0;
       ans = find (0 , a1 , s1 , nums , sum) ;
        return ans ;
    }


int main ()   {

vector<int> v = {1,2,3,4,5,6,7,8};
cout << splitArraySameAverage(v);


}