#include <iostream>
using namespace std ;
// with repeation
void find (int i ,vector<int>& candidates, int target , vector<vector<int> >&ans , vector<int>&v) {
if(i==candidates.size()){
    if(target==0) {
        ans.push_back(v);
    }
    return ;
}
if(candidates[i]<=target){
target-=candidates[i];
v.push_back(candidates[i]);
find(i+1,candidates,target , ans , v);
target+=candidates[i];
v.pop_back();
}

find(i+1,candidates,target , ans , v);
}

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int> > ans;
        vector<int>v;
     find(0,candidates,target , ans , v);  
     return ans ; 
    }

int main() {
vector<int> candidates = {10,1,2,7,6,1,5};
int target =8;


vector<vector<int>> ans2 = combinationSum2(candidates,target);
for (int i=0;i<ans2.size();i++){
    for (int j=0;j<ans2[i].size();j++){
    cout <<ans2[i][j] <<" " ;
}
cout <<endl;
}

}