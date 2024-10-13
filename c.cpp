#include <iostream>
#include <map>
using namespace std;
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        cout << "Hi 1";
        int n = nums.size() ;
        int c= n-k+1;
        int j=0;
        vector <int > ans;
        while (j<c) {
                    cout << "Hi while" << j <<endl;
        int nums2[k] ;
        int t=0;
        for (int i=j;i<k+j;i++) {
                cout << "Hi nums2 " << i <<endl;
            nums2[t++]=nums[i];
        }
            for(int i=0;i<sizeof(nums2)/sizeof(int);i++) {
        cout << nums2[i] << " ";
    }
    cout << endl;
        map<int , int > mpp ;
        for (int i=0;i<k;i++) {
            mpp[nums2[i]] ++ ;
        }      
        int mincount=k/mpp.size();
        int a=0;
        for(const auto& z : mpp) {
            cout << "Mapp second " <<z.first << "  "  <<z.second <<"     " <<mincount <<endl;
            if(z.second>mincount) a+=(z.second*z.first) ;
        }

        
cout << "Hi end" << a <<endl;
ans.push_back(a);
j++;
        }
        cout <<endl;
    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << " ";
    }
    return ans ;
    }
int main () {
    vector<int> nums ={1,1,2,2,3,4,2,3};
findXSum(nums , 6, 2) ;
}