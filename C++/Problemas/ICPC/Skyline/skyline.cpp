#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

long long mergeAndCount(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;
    long long invCount = 0;
    
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            invCount += (mid - i + 1); // All elements from i to mid are greater than arr[j]
        }
    }
    
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];
    
    for (i = left, k = 0; i <= right; i++, k++) {
        arr[i] = temp[k];
    }
    
    return invCount;
}

long long mergeSortAndCount(vector<int>& arr, int left, int right) {
    long long invCount = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;
        invCount += mergeSortAndCount(arr, left, mid);
        invCount += mergeSortAndCount(arr, mid + 1, right);
        invCount += mergeAndCount(arr, left, mid, right);
    }
    return invCount;
}

int main() {
    int n;
    
    while (cin >> n && n != 0) {
        vector<int> heights(n);
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }
        
        if (n == 1) {
            cout << fixed << setprecision(3) << "0.000" << endl;
            continue;
        }
        
        // Count inversions using merge sort
        vector<int> copy = heights;
        long long inversions = mergeSortAndCount(copy, 0, n - 1);
        
        // Total possible pairs
        long long totalPairs = (long long)n * (n - 1) / 2;
        
        // Calculate ratio
        double ratio = (double)inversions / totalPairs;
        
        cout << fixed << setprecision(3) << ratio << endl;
    }
    
    return 0;
}