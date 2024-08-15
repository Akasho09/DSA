#include <iostream>
#include <vector>
using namespace std;

void nextPermutation(vector<int>& arr) {
    int n=arr.size();
    int index=-1;
for (int i=n-2;i>=0;i--){
    if (arr[i] < arr[i+1]){
index=i;
break;
}
}

if (index==-1){
    reverse(arr.begin(),arr.end());
}
else {

for (int i=n-1;i>index;i--){
    if (arr[i] > arr[index]){
swap(arr[i],arr[index]);
break;
}
}

reverse(arr.begin()+index+1,arr.end());

}
}

int main (){
vector<int> v;
v.push_back(1);
v.push_back(0);
v.push_back(2);
v.push_back(0);
// v.push_back(1);
// v.push_back(1);
// v.push_back(1);
// v.push_back(2);
// v.push_back(1);
nextPermutation (v);
for (int i = 0; i < v.size(); i++) { 
            cout << v[i] << " "; 
        cout << endl; 
    }
}