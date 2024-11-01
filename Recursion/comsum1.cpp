#include <iostream>
#include <vector>
using namespace std ;

void findcombos(int i,vector<int>& candidates, int target , vector<int>&arr , vector<vector<int>>&ans ) {
if(i==candidates.size()){
if(target==0) {
   ans.push_back(arr) ;
}
return ;
}

if(candidates[i]<=target) {
    arr.push_back(candidates[i]);
    findcombos( i ,candidates, target-candidates[i] , arr , ans );
    arr.pop_back();
}
    findcombos( i+1 ,candidates, target , arr , ans );

    }

vector<vector<int> > combosum(vector<int> candidates,int target) {
vector<int> arr ;
vector<vector<int>> ans ;
findcombos( 0,candidates, target , arr , ans );
return ans;
}


int main () {
vector<int> candidates = {1,2,3};
int target =7;


vector<vector<int>> ans2 = combosum(candidates,target);


for (int i=0;i<ans2.size();i++){
    for (int j=0;j<ans2[i].size();j++){
    cout <<ans2[i][j] <<" " ;
}
cout <<endl;
}

}