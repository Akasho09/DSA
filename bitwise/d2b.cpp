#include <iostream>
#include <string>
#include <math.h>
using namespace std ;

string binaryof (int n) {
string ans="" ;
    while (n>0){
if (n%2==0){
ans+='0';
}
else ans+='1';
n=n/2;
    }
    reverse(ans.begin(),ans.end());
    return ans ;
}

int decimalof (string s) {
int ans=0;
int i=s.length()-1;
while (i>=0) {
if(s[i]=='1'){
int j = s[i]-48;
ans+=((1 << i)*j);
}
i--;
}
return ans ;
}


int main () {

cout << binaryof(10) <<endl;
cout << binaryof(12) <<endl;
cout << binaryof(16) <<endl;

cout << decimalof("10101") <<endl;

}