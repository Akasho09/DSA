#include <iostream>
using namespace std ;

void removerightmostsetbit (int &n) {
n = n & (n-1);
}

int countsetbits (int n) {
int count =0;
while(n>0) {
    count+=(n&1); // equivalent to %2 
    n=n>>1; // n=n/2
}
return count ;
}

int countsetbits2 (int n) {
    int count =0;
    while(n!=0){
    n=n&(n-1); // remove set bits 
    count ++;
    }
    return count ;
}

int main () {
    int n = 13 ; // 1101
removerightmostsetbit(n);
cout << "n : " <<n <<endl; 
removerightmostsetbit(n);
cout << "n : " <<n <<endl;
removerightmostsetbit(n);
cout << "n : " <<n <<endl;

cout << countsetbits(13) <<endl;
cout << countsetbits(16) <<endl;
cout << countsetbits(12) <<endl <<endl;

cout << countsetbits2(13) <<endl;
cout << countsetbits2(16) <<endl;
cout << countsetbits2(12) <<endl <<endl;

}