class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        
        
        long long totalSum = 0;
        for (int val : arr) {
            totalSum += val;
        }

        long long leftSum = 0;
        for (int i = 0; i < (int)arr.size() - 1; i++) {
            leftSum += arr[i];
            if (leftSum == totalSum - leftSum) {
                return true;
            }
        }

        return false;
    }
};

/*Given an array of integers arr, return true if it is possible to split it in two subarrays (without reordering the elements), such that the sum of the two subarrays are equal. If it is not possible then return false.

Examples:

Input: arr = [1, 2, 3, 4, 5, 5]
Output: true
Explanation: In the above example, we can divide the array into two subarrays with equal sum. The two subarrays are: [1, 2, 3, 4] and [5, 5]. The sum of both the subarrays are 10. Hence, the answer is true.
Input: arr = [4, 3, 2, 1]
Output: false
Explanation: In the above example, we cannot divide the array into two subarrays with equal sum. Hence, the answer is false.*/