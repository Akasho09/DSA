#include <iostream>
#include <vector>
using namespace std ;

bool sub(int i , int arr[], int n , int sum , int k , vector<int>& arr2 ) {
if (i==n){
if (sum==k) {
for (int j=0;j<arr2.size();j++){
    cout << arr2[j] << " ";
}
cout << endl;
return true;
}
return false;
}
if(sub(i+1,arr,n,sum ,k , arr2)==true) return true ;
sum+=arr[i];
arr2.push_back(arr[i]);
if(sub(i+1,arr,n,sum ,k , arr2)==true) return true ;
sum-=arr[i];
arr2.pop_back();
}

int main () {
int n=3;
int arr[3]={1,2,1};
vector <int> arr2;
sub(0,arr,n, 0  ,3, arr2);
}