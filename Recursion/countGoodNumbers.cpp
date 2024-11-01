#include <iostream>
using namespace std;
class Solution {
public:
const int MOD = 1e9 + 7;

long long myPow(int x,long long n, int mod) {
long long ans = 1.0;
long long m = n;
long long y=x;
while(m>0) {
    if(m%2==1) {
        ans=(ans*y)%mod;
    }
    y=(y*y)%mod;
    m=m/2;
}
return ans;
}

int countGoodNumbers(long long n) {
    long long ans = myPow(20, n / 2, MOD);
    if(n%2!=0) ans = (ans * 5) % MOD;
    return ans;
}
};

int main() {
   long long int ans=1;
   int n=13;
    for (int i=0;i<n;i++){
        ans*=5;
        ans*=4;
        i++;
    }
    if(n%2!=0) ans/=4;
cout << (ans%1000000007);
}