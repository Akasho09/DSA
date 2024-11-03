#include <iostream>
using namespace std ;


int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

string getPermutation(int n, int k) {
    k--;
    string s="";
    string ans="";
    int i=0;
for(;i<n;i++) {
s+=to_string(i+1);
}
i=0;
while( i<n ){
int f =factorial(n-1-i);
int m = ceil(k/f);
cout <<"m:" <<m <<endl;
ans+=(s[m]);
if(m>0){
k=k-m*f;
} 
s.erase(s.begin()+m);
cout <<"s:" <<s <<endl;
i++;
}   
return ans;  
    }

int main () {
cout << getPermutation(3,5);

}