#include <iostream>
using namespace std ;

int shiftstoconvert(int a , int b ) {
int c = a^b;
int ans =0;

for (int i=0;i<32;i++){
    if(c&(1<<i)) ans++;
}
return ans ;
}
int main () {

cout << shiftstoconvert(10,7);
}