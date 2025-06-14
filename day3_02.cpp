#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int findEquilibrium(vector<int>& arr) {
            int total = 0;
            for (int num : arr) {
                total += num;
            }
    
            int leftSum = 0;
                for (int i = 0; i < arr.size(); i++) {
                int rsum=total-leftSum-arr[i];
    
                if (leftSum == rsum) {
                    return i;
                }
    
                leftSum += arr[i]; 
            }
    
            return -1; 
        }
    };
    