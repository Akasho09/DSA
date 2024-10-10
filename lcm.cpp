#include <iostream>
using namespace std ;
void lcm1  () {
int n,a,b,i;
    cin >> a >> n;
    if (a>n) i=a;
    else i=n;
    b=i; 
while (1) {
   if (i%a==0 && i%n==0) {
cout << i;
break;
   }
   else {
   i+=b;
   }
    }
}

int gcd (int a , int b) {
 while (b>0) {
int temp=b;
b=a%b;
a=temp;
}
return a ;
}



void lcm2 () {
    cout << "\nEnter 2 nums" ;
    int a , b;
    cin >> a >> b;
int h =gcd(a,b);
int l= (a*b) / h ;
cout << "LCM is " <<l <<endl;
}

int main () {
lcm1() ;
lcm2 ();
}

/*
HCF --> BIGGER NUM / i++

*/