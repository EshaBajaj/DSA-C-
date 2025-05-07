#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int max = INT_MIN;
        int smax = INT_MIN;

        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] > max) {
                smax = max;
                max = arr[i];
            } else if (arr[i] > smax && arr[i] != max) {
                smax = arr[i];
            }
        }

        return (smax == INT_MIN) ? -1 : smax;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << "Second largest element: " << sol.getSecondLargest(arr) << endl;
    return 0;
}
