#include <iostream>
using namespace std;
// parametrized recursion
void sum(int n , int ans) {
if (n<1) {
cout << ans <<endl;
return;
}
sum(n-1,ans+n);
}

int main() {
sum(5,0);
}