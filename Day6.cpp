#include <iostream>
#include <vector>

using namespace std;

// Function to find subarrays whose sum is zero
vector<pair<int, int>> findZeroSumSubarrays(vector<int>& arr) {
    vector<pair<int, int>> result;
    
    // Traverse each element as the starting point of a subarray
    for (int start = 0; start < arr.size(); start++) {
        int sum = 0;
        
        // Find all subarrays starting from 'start'
        for (int end = start; end < arr.size(); end++) {
            sum += arr[end];
            
            // If sum becomes 0, we have found a subarray with zero sum
            if (sum == 0) {
                result.push_back({start, end});
            }
        }
    }

    return result;
}

int main() {
    // Example input
    vector<int> arr = {1, 2, -3, 3, -1, 2};
    
    // Find all subarrays with sum zero
    vector<pair<int, int>> zeroSumSubarrays = findZeroSumSubarrays(arr);
    
    // Output the result
    for (const auto& subarray : zeroSumSubarrays) {
        cout << "(" << subarray.first << ", " << subarray.second << ")" << endl;
    }
    
    return 0;
}
