#include <iostream>
using namespace std;

    int numFriendRequests(vector<int>& ages) {
        int ans = 0;
        sort(ages.begin(),ages.end());
    for(int i=ages.size()-1;i>1;i--){
        int s=0;
        int e=i-1;
        int m=s+(e-s)/2;
    while(s<=e){
        if(ages[m]>(ages[i]/2 + 7)) e=m-1;
        else s=m+1;
        m=s+(e-s)/2;
    }
    ans+=(i-m);
    cout << m <<" " <<ans <<endl;

    }
    return ans ;
    }

int main () {
    vector<int> v= {1,2,20,30,30,30,110,120};
    cout << numFriendRequests(v);

}