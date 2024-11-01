#include <iostream>
using namespace std ;

void reverse (int i, int arr[], int n) {
if (i>=n) return ;
swap(arr[i],arr[n-1]);
reverse(i+1,arr,n-1);
}

int main () {
    int arr[7]= {1,2,3,4,5,6,7};
    int s=0;
    int n=7;
reverse(s,arr,n);
for(int i=0 ;i<n;i++) {
    cout << arr[i] << " ";
}

}