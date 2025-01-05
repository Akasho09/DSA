#include <iostream>
using namespace std;

int find (int n , int m ) {
    if(n==1 || m==1 ) return 1;
   return find(n-1,m)+find(n,m-1);
}
int s(int n , int m){
    return find(n,m);
}
int main () {
    cout << s(3,7);
}