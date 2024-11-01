#include <iostream>
using namespace std ;
// functional recursion
int sum (int n) {
    if (n==0) {
        return 0;
    }
return( n+sum(n-1));

}

int main () {
cout << sum(5);

}