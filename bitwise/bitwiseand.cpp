#include <iostream>
using namespace std ;

// sum without using + or -
    int getSum(int a, int b) {
    while(b!=0){
        int carry = (a&b) << 1;
        a=a^b;
        b=carry;
    }
    return a ;
    }


    int rangeBitwiseAnd(int left, int right) {
        if(left==0) return 0;
        if((right-left)>(1<<30)) return 0;
   int i=0;
   while(left>=(1<<i)) i++;
   cout << i << endl;
   i--;
   int d = left-(1<<i);
   if((right-left-d+1)>(1<<i)) return 0;
   else {
    return (1<<i);
    }
    }

int main () {

rangeBitwiseAnd(3,4);

}