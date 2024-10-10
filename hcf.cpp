#include <iostream>
using namespace std;

// Function to calculate GCD using the Euclidean algorithm
int hcf(int a , int b) {

while (b>0) {
    int temp=b;
    b=a%b;
    a=temp;
}
return a; // because of extra loop else b;
}

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate and display the HCF (GCD)
    cout << "HCF (GCD) of " << num1 << " and " << num2 << " is " << hcf(num1, num2) << endl;

    return 0;
}

