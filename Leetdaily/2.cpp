int findLengthOfShortestSubarray(vector<int>& arr) {
    int n = arr.size();

    // Find the left boundary of the non-decreasing prefix
    int left = 0;
    while (left + 1 < n && arr[left] <= arr[left + 1]) {
        left++;
    }

    // If the entire array is already non-decreasing
    if (left == n - 1) return 0;

    // Find the right boundary of the non-decreasing suffix
    int right = n - 1;
    while (right > 0 && arr[right - 1] <= arr[right]) {
        right--;
    }

    // Calculate the minimum removal length
    int result = min(n - left - 1, right); // Remove prefix or suffix

    // Check merging prefix and suffix
    int i = 0, j = right;
    while (i <= left && j < n) {
        if (arr[i] <= arr[j]) {
            result = min(result, j - i - 1);
            i++;
        } else {
            j++;
        }
    }

    return result;
}
