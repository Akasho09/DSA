#include <iostream>
using namespace std;

bool palindrome(string s , int i ) {
if(i>=s.size()/2) return true;
if(s[i]!=s[s.size()-i-1]) return false ;
return palindrome(s,i+1);
}

int main() {
cout << palindrome("aksaaska" , 0) ;

}