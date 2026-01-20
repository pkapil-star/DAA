#include <iostream>
using namespace std;

int maxSubArraySum(int arr[], int n) {
    int maxSoFar = arr[0];
    int currentMax = arr[0];

    for (int i = 1; i < n; i++) {
        currentMax = max(arr[i], currentMax + arr[i]);
        maxSoFar = max(maxSoFar, currentMax);
    }
    return maxSoFar;
}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << maxSubArraySum(arr, n);

    return 0;
}
//
// Created by ACER on 20-01-2026.
//