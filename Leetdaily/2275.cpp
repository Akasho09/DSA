#include <iostream>
using namespace std ;
void find (int i ,vector<int> &candidates , vector <int> &v , int & ans ) {
    if(i==candidates.size()){
        int s=v[0];
        for(int j=1;j<v.size();j++) {
        s = s & v[j];
        if (s==0){
            return ;
        }
        }
         if(v.size()>ans){
            ans=v.size();
        } 
        return ;
    }
v.push_back(candidates[i]);
        find(i+1, candidates , v , ans );
v.pop_back();
        find(i+1, candidates , v , ans );
}
        int largestCombination(vector<int>& candidates) {
        vector<int> v;
        int ans=0;
        find(0 , candidates , v , ans );
        return ans ;
    }

int main () {

vector<int > v = {33,93,31,99,74,37,3,4,2,94,77,10,75,54,24,95,65,100,41,82,35,65,38,49,85,72,67,21,20,31} ;
cout << largestCombination(v);

}