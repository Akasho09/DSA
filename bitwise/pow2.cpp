#include <iostream>
using namespace std ;
int main () {
int num =15;
bool isPowerOfTwo = (num > 0) && ((num & (num - 1)) == 0);
cout << isPowerOfTwo;
}

