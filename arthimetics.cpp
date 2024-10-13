//   example input: `10 +   2 *    (   6 - (4 + 1) / 2) + 7`
#include <iostream>
using namespace std;
int fn (string s) {
    int j=0;
while(int(s[j])<48 && s[j+1]>57) {j++;};
int result=s[j]-48;
int i=0;
int a;
while (s[i]!='\0'){
cout << s[i]  << " " ;
    if (s[i]=='(') {
        cout << " \n Entered Recursuion \n ";
string s1="";
while (s[i]==')') { 
    s1+=s[i];
    i++;
}
fn(s1);
    }
    else if (s[i]==20) {
        i++;
        continue;
    }
    else if (s[i]=='+') {
        // does not get ( ' ( '  ) after this -|
        while(int(s[i+1])<48 && s[i+1]>57) {i++ ;}
        result+=s[i+1]-48;
    }
    else if (s[i]=='-') {
        while(int(s[i+1])<48 && s[i+1]>57) {i++ ;}
        result-=(s[i+1]-48);
    }  
      else if (s[i]=='*') {
while(int(s[i+1])<48 || s[i+1]>57) { 
i++ ;
cout <<" s[i] : " << s[i]  <<endl;
}
        result*=(s[i+1]-48);
    }  
    else if (s[i]=='/') {
        while(int(s[i+1])<48 && s[i+1]>57) {i++ ;}
        result/=(s[i+1]-48);
    }
i++;
}
cout << endl;
return result ;
}

int main () {
string s="(3*(4+9-8))";
cout <<fn(s);

}