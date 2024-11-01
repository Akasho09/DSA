#include <iostream>
using namespace std ;

int sub(int i , int arr[], int n , int sum , int k ) {
if (i==n){
if (sum==k) return 1;
else return 0;
}
int l = sub(i+1,arr,n,sum ,k) ;
sum+=arr[i];
int p = sub(i+1,arr,n,sum ,k) ;
sum-=arr[i];
return (l+p);
}

int main () {
int n=5;
int arr[5]={1,2,1,1,1};
cout << sub(0,arr,n, 0 ,3);

}