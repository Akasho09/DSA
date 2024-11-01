#include <iostream>
using namespace std ;

void sub(int i , int arr[], int n , vector<int> &arr2) {
if (i==n){
    if (arr2.size()==0) {
    cout << "{}\n"; 
    return ;
    }
    cout <<"{ ";
    for (int j=0;j<arr2.size();j++) {
        cout <<arr2[j] ;
        if (j<arr2.size()-1) {
            cout <<",";
        }
    }
    cout <<" }\n" ;
    return ;
}
sub(i+1,arr,n, arr2);
arr2.push_back(arr[i]);
sub(i+1,arr,n, arr2);
arr2.pop_back();

// arr2.push_back(arr[i]);
// sub(i+1,arr,n, arr2);
// arr2.pop_back();
// sub(i+1,arr,n, arr2);
}

int main () {
int n=3;
int arr[3]={1,2,1};
vector <int> arr2;
sub(0,arr,n, arr2);

}