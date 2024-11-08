#include <iostream>
using namespace std ;

// using a+b
void swap1(int &a , int &b ) {
a=a+b;
b=a-b;
a=a-b;
}

// using XOR
void swap2 (int &a , int &b) {
a=a^b;
b=a^b;
a=a^b;
}
int main () {
int a = 6;
int b = 7;
swap1(a,b);
cout <<"a: " <<a <<endl;
cout <<"b: " <<b <<endl <<endl;
swap2(a,b);
cout <<"a: " <<a <<endl;
cout <<"b: " <<b <<endl <<endl;

int c=a^a^a;
cout <<c;

}