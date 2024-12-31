#include <iostream>
using namespace std ;
//     unordered_set<int> travelDays(days.begin(), days.end());
//     vector<int> dp(366, 0);

//     for (int i = 1; i <= 365; ++i) {
//         if (!travelDays.count(i)) {
//             dp[i] = dp[i - 1];  // No travel; cost remains the same
//         } else {
//             dp[i] = min({
//                 dp[i - 1] + costs[0],  // Daily pass
//                 dp[max(0, i - 7)] + costs[1],  // Weekly pass
//                 dp[max(0, i - 30)] + costs[2]  // Monthly pass
//             });
//         }
//     }
//     return dp[365];
// }
int getM(int d){
    if(d>31 && d<=59 ){
        return 28;
    } else if (d%30==1 || d%30==3 || d%30==5 || d%30==7 || d%30==9 || d%30==11 ) return 31;
      else return 30;
}

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int ans =0;
        int DCost = 0;
        int WCost = 0;
        int MCost = 0;
        int t=days.size()-1;
        while(t>=0){
            int w=t;
            int m=t;
            while(days[t]-days[0]>28 && days[t]-days[m]-1<getM(days[t])) m--; // use BS
            m++;
            cout <<"m" <<m <<endl;
            if(m < t){
                while(w>=m){
                while(w>=m && days[t]-days[w]<7) w--; //
                w++;
                cout <<"w" <<w <<endl;
                WCost+=min(costs[1],costs[0]*(t-w+1));
                t=w-1;
                }
                ans+=min(costs[2],WCost);
                WCost=0;
            } else {
               while(w>=m && days[t]-days[0]>=7 && days[t]-days[w]<7) w--; //
               w++;
               cout <<t <<" w: " <<w <<endl;
               if(t>w){
               ans+=min(costs[1],costs[0]*(t-w+1));
               t=w-1;
               } else {
              cout <<"day" <<t <<endl;
               ans+=(costs[0]);
               t--;
               }

            }

        }
        cout <<"ans" <<ans <<endl;
        return ans ;
    }

int main () {
    vector<int>v = {1,4,6,9,10,11,12,13,14,15,16,17,18,20,21,22,23,27,28};
    vector<int> v2 = {3,13,45};
    mincostTickets(v,v2);
}