#include <iostream>
using namespace std;
    int myAtoi(string s) {
        long long int ans=0;
        bool sign=false;
        bool num = 0 ;
        for (int i=0;i<s.length();i++) {
           if (s[i]>=48 && s[i]<=57){
            num = 1;
            ans*=10;
            ans+=(s[i]-48);
           if (ans > 2147483647 ) {
           if(sign==0) ans=2147483647; 
           else ans=-2147483648;
            break;
            }
            }
            else if(s[i]=='-' && num==0){
              sign=true; 
              num =1; 
            }
             else if(s[i]=='+' && num==0){
                num=1;
            }
            else if((s[i]=='"' && num==0) || (s[i]==' ' && num==0)) {} 
            else {
                break;
            }
        }
        if(sign==true) ans*=-1;
        return ans;
    }

int main() {
cout <<myAtoi("   -042") <<endl ;
cout <<myAtoi("   -20000000000000000000") ;

}