#include <iostream>
using namespace std;

    bool judgeSquareSum(int c){
        if( c==0 || c==1 ) return true;
        int n = sqrt(c);
    while(n>1){
        cout <<"n : " <<n <<endl;
        if(n*n==c || n*n==c-1) return true ;
        int s=2;
        int e=n;
        int m=s+(e-s)/2;
        while(s<=e){
            cout <<m <<endl;
            if(c-n*n==m*m) return true ;
            else if(c-n*n>m*m) s=m+1;
            else e=m-1;
            m=s+(e-s)/2;
        }
        n--;
    }
    return false ;
    }

int main () {
    judgeSquareSum(200);
    
}