#include <iostream>
using namespace std ;

int factorial (int n) {
    if(n==1) return 1;
return n*factorial(n-1);
}

int factorial2 (int n, int ans ) {
    if(n==1) return ans;
return factorial2(n-1 , ans*n);
}

int main () {
cout << factorial(5) <<endl;
cout << factorial2(5,1);

}