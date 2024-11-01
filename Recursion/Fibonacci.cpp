#include <iostream>
using namespace std ;
 // Multiple recursion 

void Fibonacci(int n, int i, int j) {
if (n<1) {
    return ;
}
cout <<j << " " ;
Fibonacci(n-1,i+j,i);
}

int Fibonacci2 (int n) {
if (n<=1) {
    return n;
}
int last = Fibonacci2(n-1);
int Slast = Fibonacci2(n-2);
return last+Slast;
}

int main () {
Fibonacci(5,1,0); // Fibonacci starting frm 0
cout <<endl;
Fibonacci(1,1,1);  // Fibonacci starting frm 0
cout <<endl;
Fibonacci(2,1,1);
cout <<endl;
Fibonacci(3,1,1);
cout <<endl;
Fibonacci(5,1,1);
cout <<endl;
Fibonacci(5,3,2); // starting frm 2,3 

cout <<endl;
cout <<endl;
// 7th Num in a Fibonacci 
cout << Fibonacci2(7);

}