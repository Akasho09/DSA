#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
        int maxp=0;
        int mincost=prices[0];
        for (int i=1;i<prices.size();i++){
maxp=max(maxp,prices[i]-mincost);
mincost=min(mincost,prices[i]);
}
return maxp;
}

int main (){
vector<int> v;
v.push_back(7);
v.push_back(1);
v.push_back(5);
v.push_back(2);
v.push_back(6);
v.push_back(4);
v.push_back(1);
v.push_back(2);
v.push_back(1);
   cout << maxProfit(v);
}