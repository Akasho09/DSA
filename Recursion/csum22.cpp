#include <iostream>
using namespace std;

void find (int i , vector<int>& candidates, int target , vector<vector<int>> &ans , vector<int> &v) {
if(target==0) {
    ans.push_back(v);
    return ;
}
for (int j=i; j<candidates.size();j++) {
if(j>i && candidates[j]==candidates[j-1]) continue;
if(candidates[j]>target) break;
v.push_back(candidates[j]);
find (j+1, candidates , target-candidates[j] , ans , v  );
v.pop_back();
}
}

vector<vector<int>> csum2(vector<int>& candidates, int target) {
    sort(candidates.begin(),candidates.end());
vector<int> v;
vector<vector<int>> ans;
find (0, candidates , target , ans , v  );
return ans;
}

int main () {

vector<int> candidates = {10,1,2,7,6,1,5};
int target =8;


vector<vector<int>> ans2 = csum2(candidates,target);
for (int i=0;i<ans2.size();i++){
    for (int j=0;j<ans2[i].size();j++){
    cout <<ans2[i][j] <<" " ;
}
cout <<endl;
}

}