//   example input: `10 +   2 *    (   6 - (4 + 1) / 2) + 7`
#include <iostream>
using namespace std;

int operation(int a , int b , char op) {
    if(op=='+') return a+b;
    if(op=='-') return a-b;
    if(op=='*') return a*b;
    if(op=='/') return a/b;
}


int fn (string & s) {
int i=0;
stack <int> numst ;
stack <char> charst;
int result = 0;
while(i<s.length()) {
    // num
    if (s[i]>=48 && s[i]<=57) numst.push(s[i]-48);
    // bracket
    else if(s[i]=='(') charst.push(s[i]);
    // end br
    else if (s[i]==')') {
        int n1=numst.top() ; numst.pop();
        int n2=numst.top() ; numst.pop();
        char op = charst.top() ; charst.pop() ;
        result+=operation(n1,n2,op);
    }
    // op
    else if(s[i]>=40 && s[i]<=47) {
    if(charst.top()=='/' ) {
        int a= numst.top(); numst.pop();
        int b= numst.top(); numst.pop();
        numst.push(a/b);
    }
    else if(charst.top()=='*' ) {
        int a= numst.top(); numst.pop();
        int b= numst.top(); numst.pop();
        numst.push(a*b);
    }
    else if (charst.top()=='+'){
        if(s[i]!='/' && s[i]!='*') {
        int a= numst.top(); numst.pop();
        int b= numst.top(); numst.pop();
        numst.push(a*b);
        }
    else if (charst.top()=='-'){
        if(s[i]!='/' && s[i]!='*') {
        int a= numst.top(); numst.pop();
        int b= numst.top(); numst.pop();
        numst.push(a*b);
        }
    }    
    }
    charst.pop();
    charst.push(s[i]);
    }

    else charst.push(s[i]);

    }
}

int main () {
string s="(3*(4+9-8))";
cout <<fn(s);

}