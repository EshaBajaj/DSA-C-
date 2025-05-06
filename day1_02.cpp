#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> seen;
        int maxK = -1;

        for (int num : nums) {
            if (seen.count(-num)) {
                maxK = max(maxK, abs(num));
            }
            seen.insert(num);
        }

        return maxK;
    }
};
