#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    int countTriplets(vector<int> nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n - 2; ++i) 
        {
            for (int j = i + 1; j < n - 1; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    if (nums[i] < nums[j] && nums[j] < nums[k]) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};