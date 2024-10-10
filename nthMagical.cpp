#include <iostream>
using namespace std;

int hcf ( int a , int b) {
while (b>0){
int t=b;
b=a%b;
a=t;
}
return a;
}


    int nthMagicalNumber(int n, int a, int b) {
    if (a>b) {
        int t=a;
        a=b;
        b=t;
    }
    if (b%a==0) return n*a % 10000007;
    else {
    int lcm=(a*b)/hcf(a,b);
    int k=(n*a)/b-(n*a)/lcm;
    int ans=(n-k)*a;
    return ans%10000007;
    }
    }

int main () {
cout << nthMagicalNumber(5,2,4) ;

}