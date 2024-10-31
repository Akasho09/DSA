#include <iostream>
using namespace std;

void fn(int a) {
    cout << a-- << " ";
        if (a <= 0)  // Base condition to stop recursion
        return;
    fn(a);   // Decrement `a` before passing it to the next recursive call
}

int main() {
    fn(5);
    return 0;
}
