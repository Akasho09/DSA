#include <iostream>
using namespace std ;
    string baseNeg2(int n) {
     string ans ="";
     while(n!=0) {
      int r = n%-2;
      n/=(-2);
      if(r==-1){
        r=1;
        n+=1;
      }
    ans+=(r+'0');
     }
  reverse (ans.begin(),ans.end());
  return ans ;
    }
    
int main ()  {
    int n= 5;
    cout << n%-2;
    cout <<endl << n/-2 <<endl <<endl;

    cout << 3/-2;
    cout << 3%-2;
}