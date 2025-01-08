#include <iostream>
using namespace std ;

    int hIndex(vector<int>& citations) {
        int s=0;
        int n= citations.size();
        int e = n-1;
        int m;
        int ans = 0;
        while (s<=e){
            m= s+(e-s)/2;
        if(citations[m]>=n-m){
            ans=max(ans,m);
            s=m+1;
            }
        else s=m-1;
        }
        cout <<ans <<endl;
        return ans ;
    }
   bool judgeSquareSum(int c){
        if( c==1 || c==0 || c==2 ) return true;
        int s=0;
        int e=c/2;
        int m=s+(e-s)/2;
    while(s<=e){
        m=s+(e-s)/2;
        cout <<m <<" : "<<endl;
        if(m!=0 && c/m>=m){
            int s1=0;
            int e1=c/4;
            int m1=s1+(e1-s1)/2;
        while(s1<=e1){
            m1=s1+(e1-s1)/2;
            cout <<m1 <<endl;
            if(c-m*m-m1*m1==0) return true;
            else if(c-m*m-m1*m1<0) e1=m1-1;
            else s1=m1+1;
        }
        s=m+1;
        } else e=m-1;
    }
    return false ;
    }
int main () {
judgeSquareSum(512);

}