#include <iostream>
#include <vector>
using namespace std;

    vector<int> grayCode(int n) {
        int m = (1<<n);
        vector<int> ans ;
    for(int i=0;i<m;++i) {
        int gray = (i ^ (i >> 1));
    ans.push_back(gray);
    }
    return ans ;
    }

int main () {
 vector<int>g =grayCode(5);
for(int i=0;i<g.size();i++) {
cout <<g[i] <<" " ;
}
return 0;
}