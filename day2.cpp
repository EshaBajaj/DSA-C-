#include <iostream>
#include <vector>
#include <cmath>  // for abs()

using namespace std;

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size(); 

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (abs(nums[i] - nums[j]) == k) {
                    count++;
                }
            }
        }

        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 1};
    int k = 1;

    int result = sol.countKDifference(nums, k);
    cout << "Number of valid pairs: " << result << endl;

    return 0;
}
