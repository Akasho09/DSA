#include <iostream>
#include <vector>
using namespace std;

long long sumOfAllSubarrays(const vector<int>& arr) {
    int n = arr.size();
    long long totalSum = 0;

    for (int i = 0; i < n; ++i) {
        totalSum += arr[i] * (1<<(n-1));
    }
    return totalSum;
}

int main() {
    vector<int> arr = {1, 2, 3};
    cout << "Sum of all subarrays: " << sumOfAllSubarrays(arr) << endl;
    return 0;
}
