#include <iostream>
using namespace std;

    int mySqrt(int x) {
        if(x==0) return 0;
        int s=1;
        int e=x/2;
        int m ;
    while(s<=e){
        m = s+(e-s)/2;
        if(x/m==m) return m;
        else if(x/m>m) s=m+1;
        else e=m-1;
    }
    cout <<m <<endl;
    if(m*m>x) return m-1;
    else return m;
    }


int main () {
    mySqrt(99);
}