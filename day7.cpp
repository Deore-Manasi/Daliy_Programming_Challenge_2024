#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the trapped water
int trapRainWater(vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0; // No bars, no water trapped

    int left = 0;      
    int right = n - 1;  
    int leftMax = 0;           
    int rightMax = 0;          
    int trappedWater = 0;     
 
    // Two pointer approach
    while (left < right) {
        if (height[left] < height[right]) {
            // If the current height at left is less than leftMax, water can be trapped
            if (height[left] >= leftMax) {
                leftMax = height[left]; // Update leftMax
            } else {
                trappedWater += leftMax - height[left]; // Trap water
            }
            left++; // Move left pointer
        } else {
            // If the current height at right is less than rightMax, water can be trapped
            if (height[right] >= rightMax) {
                rightMax = height[right]; // Update rightMax
            } else {
                trappedWater += rightMax - height[right]; // Trap water
            }
            right--; // Move right pointer
        }
    }

    return trappedWater;
}

int main() {
    // Example input
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    
    // Calculate the trapped water
    int result = trapRainWater(height);
    
    // Output the result
    cout << "Total trapped water: " << result << endl;
    
    return 0;
}
