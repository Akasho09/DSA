#include <iostream>
using namespace std;

int main() {
 int n=1200;
 int c=1;
 int d=9;
    while(n>0){
        c++;
        n=n/10;
        d=d*10;
        cout <<n <<" "<<" " <<d <<" "<<c <<" " <<endl;
        }
    cout <<n <<" "<<" " <<d <<" " <<c <<" " <<endl;
}