#include <iostream>
#include <vector>
using namespace std;
 vector<int> generaterow(int row){
    int ans=1;
    vector<int> v;
    v.push_back(ans);
    for (int i=1;i<row;i++ ){
ans*=row-i;
ans/=i;
v.push_back(ans);
    }
    return v;
}
   vector<vector<int> > generate(int numRows) {
   vector <vector <int> > answer;
   for (int i=1;i<=numRows;i++){
answer.push_back(generaterow(i));
   }
   return answer;
}
int main (){
vector<vector<int> > generate1=generate(7);
    for (int i = 0; i < generate1.size(); i++) { 
        for (int j = 0; j < generate1[i].size(); j++) 
            cout << generate1[i][j] << " "; 
        cout << endl; 
    }
}

/*  LEETCODE


vector<int> generaterow(int row){
    int ans=1;
    vector<int> v;
    v.push_back(ans);
    for (int i=1;i<row;i++ ){
ans*=row-i;
ans/=i;
v.push_back(ans);
    }
    return v;
}
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
   vector <vector <int> > answer;
   for (int i=1;i<=numRows;i++){
answer.push_back(generaterow(i));
   }
   return answer;
    }
};


*/
