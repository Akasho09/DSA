#include <iostream>
using namespace std;

void back(int n) {
if (n<1) {
    return ;
}
cout <<n <<" ";
back(n-1);
cout <<n;
}

int main () {
back(5);

}