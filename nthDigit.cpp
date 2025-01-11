#include <iostream>
using namespace std;

int findNthDigit(int n) {
        if(n==10) return 1;
        int f=9 ;
        int d=9;
        int num=9;
        int c=1;
    while(n>d){
        cout <<n <<"iski m ka bhsdaa"<<num <<" " <<d <<" " <<c <<" " <<endl;
        n-=d;
        c++;
        d*=(10*(c));
        f*=10;
        num+=f;
    }
    cout <<n <<" "<<num <<" " <<d <<" " <<c <<" " <<endl;
    num=num/10;
    num+=(n/c);
    cout <<n <<" "<<num <<" " <<d <<" " <<c <<" " <<endl;
    int r= n%c;
    if(r){
        num++;
        string s1 = to_string(num);
        return (s1[r-1]-'0');
    } else return num%10;
    }

int main() {
   cout << findNthDigit(40);
}