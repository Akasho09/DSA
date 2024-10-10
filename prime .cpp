#include  <iostream>
using namespace std ;
int main () {
    int n,a,b,c,i;
    cin >> n;
    i=2;
    a=0;
while (i<n)
{
if (n%i==0){
cout << "NOT PRIME " ;
return 0 ;
}
i++;
}
if (a==0) {
cout << "PRIME "; 
} 
}