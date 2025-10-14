# Skyline - Solution

## Problem Analysis

We need to calculate Lucy's measure for skyline organization, which is the ratio HD/PHD where:
- HD = Height Disorders (number of pairs (i,j) where i < j but h[i] > h[j])
- PHD = Potential Height Disorders = total possible pairs = N×(N-1)/2

This is essentially asking for the **inversion count** in an array divided by the total number of pairs.

## Key Insights

1. **Height Disorder = Inversion**: A pair (i,j) with i < j and h[i] > h[j] is an inversion
2. **Efficient Counting**: We can count inversions using modified merge sort in O(N log N)
3. **Special Case**: When N = 1, the measure is defined as 0

## Solution Strategy

We use **divide and conquer** with merge sort to count inversions:

1. **Divide**: Split array into two halves
2. **Conquer**: Recursively count inversions in each half
3. **Combine**: Count inversions between the two halves during merge step

During the merge step, when an element from the right half is smaller than an element from the left half, it forms inversions with all remaining elements in the left half.

## Algorithm Steps

1. If N = 1, return 0.000
2. Use modified merge sort to count inversions
3. Calculate total possible pairs: N×(N-1)/2
4. Return ratio: inversions / total_pairs

## Time Complexity
O(N log N) due to merge sort

## Space Complexity
O(N) for temporary arrays during merge

## C++ Implementation

```cpp
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
```