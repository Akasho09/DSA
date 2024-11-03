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

# Fibonacci Tree 
![alt text](<WhatsApp Image 2024-11-01 at 21.21.29.jpeg>)

# subsequences ==> picking or not picking 
![alt text](image.png)

# subsequences passing arr2 with refrence and without refrence 
sub(i+1,arr,n, arr2);
arr2.push_back(arr[i]);
sub(i+1,arr,n, arr2);
arr2.pop_back();

an extra { arr2.pop_back(); } is needed if pass by refrence else not needed 
![alt text](image-1.png)

# making fn bool and adding returns makes it only once executable ie matches and returns true to all the fn calls in the stack and no more calls happen
 

# picking 1st or 2nd or 3rd or 4th element ie loop over array 
# here i==n will not be written bcx we looping over array 
![alt text](<Screenshot 2024-11-02 at 1.09.25 PM.png>)
for (int j=i; j<candidates.size();j++) {
if(j>i && candidates[j]==candidates[j-1]) continue;
if(candidates[j]>target) break;
v.push_back(candidates[j]);
find (j+1, candidates , target-candidates[j] , ans , v  );
v.pop_back();
}