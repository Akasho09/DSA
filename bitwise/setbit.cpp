#include <iostream>
using namespace std ;

// using right shift
void setbit1 (int n , int m) {
int p = 1 << m ; // p = 1000
// p & n 
// 1101
// 1000
// ----
// 1000
//else 
// 0000
if ((p&n)>0){
    cout << "Bit is set\n";
}
else {
    cout << "Not Set\n" ;
}
}
// using left shift
void setbit2(int n , int m) {
if (((n>>m)&1)==0){
        cout << "Not Set\n" ;
}
else  cout << "Bit is set\n";
}

int setithbitto1 (int n , int m) {
return n|(1<<m);
// 1001
// 0100 (1<<m)
// ---- or
// 1101
}

void clearithbit (int &n , int m) {
n=n&(~(1<<m));
// 1101
// 1011 == ~(1<<2) 0100, flip 1011
// ---- &
// 1001
}

void togglebit (int&n , int m ) {
    n = n^(1<<m);
}


int main () {
int n =13 ; // 1101 
int m= 3;   // 3rd bit is 1 ==set
setbit1(n,m);
setbit2(n,m);

cout << setithbitto1(9,2) <<endl; // 1001 ==> 1101(13)

int x=13;
clearithbit(x,2);
cout <<x <<endl ;

cout << "n : " <<n <<endl;
togglebit(n,2);
cout << "n : " <<n <<endl;
togglebit(n,2);
cout << "n : " <<n <<endl;

}