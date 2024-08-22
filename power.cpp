#include <iostream>
#include <vector>
using namespace std;

    double myPow(double x, int n) {
//             if(n==0 || x==1 )return 1;
//         double ans=x;
//         for (int i=1;i<abs(n);i++){
// ans*=x;
//         }

//     if (n>0) return ans;
//     else return 1/ans;
//     }
int m=n;
if(x==1) return 1;
if(x==-1){
    if (abs(n)%2==0) return 1;
    else return -1;
}
if (n==-2147483648 ) return 0;
if (n<0) n=n*-1;
  
        double ans=1;
     while (n>0){
if (n%2==1){
    ans=ans*x;
    n--;
}
else{
x=x*x;
n=n/2;
}
}
    if (m<0) return 1/ans;
    else return ans; 
    }

int main (){

cout << myPow(-1,-2147483648);
cout << myPow(1,-2147483648);
cout << myPow(2,2147483647);


}
