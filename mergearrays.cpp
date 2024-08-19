#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
        int last;
int a=0;
int b=0;
while(a<n && b<m){ 
if (nums1[n-1-a]>nums2[m-1-b]){
 last=nums1[n-1-a];
 a++;
 }
 else
 {
 last=nums2[m-1-b];
 b++;
}
nums1[n+m-a-b]=last;
}
if(a==n)
{
    for (int i=0;i<m-b;i++){
nums1[i]=nums2[i];
    }
}
}


int main(){
vector<int> v;

v.push_back(4);
v.push_back(5);
v.push_back(7);
v.push_back(9);
v.push_back(0);
v.push_back(0);
v.push_back(0);

vector<int> v2;
v2.push_back(1);
v2.push_back(2);
v2.push_back(3);

merge(v,4,v2,3);
for (int i = 0; i < v.size(); i++) { 
            cout << v[i] << " "; 
        cout << endl; 
    }
}


