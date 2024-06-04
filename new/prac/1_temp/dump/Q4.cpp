// Trapped rainwater

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to compute the amount of trapped rain water
int trapRainWater(vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0;

    vector<int> leftMax(n), rightMax(n);
    leftMax[0] = height[0];
    rightMax[n - 1] = height[n - 1];

    // Fill leftMax array
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }

    // Fill rightMax array
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    int waterTrapped = 0;
    // Calculate the trapped water
    for (int i = 0; i < n; i++) {
        waterTrapped += min(leftMax[i], rightMax[i]) - height[i];
    }

    return waterTrapped;
}

int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    vector<int> height(N);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; i++) {
        cin >> height[i];
    }

    int result = trapRainWater(height);
    cout << "Total water trapped: " << result << endl;

    return 0;
}
