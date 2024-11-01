# stack complexity = O(n) bcx n fns in stack 

# The array is passed by pointer.
- we pass the pointer of first variable 
#include <iostream>
using namespace std;

void reverse(int arr[]) {
    cout << arr[0];
}

int main() {
    int arr[3] = {1, 2, 3};
    reverse(arr);
}

# Pass by refrence
void reverse (int (&arr)[3]) {
cout << arr[0];
}