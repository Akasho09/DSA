#include <iostream>
#include <vector>
using namespace std;

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector <vector <int > > ans;
        sort(intervals.begin(),intervals.end());
 for (int i=0;i<intervals.size();i++){
    int start=intervals[i][0];
    int end=intervals[i][1];
for(int j=i+1;j<intervals.size();j++){
if (intervals[j][0]<=end){
    end=max(intervals[j][1],end);
    i++;
}
else{
break;
}
}
    ans.push_back({start,end});
}
 return ans;
}
int main () {

 vector<vector<int> > v = { {1,5} , {4,6} ,{8,10}, {9,10}};
v= merge(v);
    for (int i = 0; i < v.size(); i++) { 
            for (int j = 0; j < v[0].size(); j++) { 
            cout << v[i][j] << " "; 
    }
        cout << endl;
    }
}