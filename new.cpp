#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long maxMinSumSubarrays(vector<int>& nums, int k) {
    int n = nums.size();
    long long ans = 0;
    for (int it = 1; it <= k; it++) {
        for (int start = 0; start <= n - it; start++) {
            int maxVal = nums[start];
            int minVal = nums[start];
            for (int i = start; i < start + it; i++) {
                maxVal = max(maxVal, nums[i]);
                minVal = min(minVal, nums[i]);
            }
            ans += maxVal + minVal;
        }
    }
    return ans;
}

int main() {
    // Test case 1
    vector<int> nums1 = {1, 2, 3};
    cout << maxMinSumSubarrays(nums1, 2) << endl;  // 20
    
    // Test case 2
    vector<int> nums2 = {1, -3, 1};
    cout << maxMinSumSubarrays(nums2, 2) << endl;  // -6
    
    return 0;
}