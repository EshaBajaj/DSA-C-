lass Solution {
  public:
    long long subarraySum(vector<int>& arr) {
        long long mod = 1000000007;
        long long totalSum = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            long long contribution = (long long)arr[i] * (i + 1) * (n - i);
            contribution %= mod;  // Take modulo to avoid overflow
            totalSum = (totalSum + contribution) % mod;
        }

        return totalSum;
    }
    
};

/*Given an array arr. Find the sum of all subarrays of the array since the sum could be very large print the sum modulo (109+7).

Examples:

Input: arr[] = [1, 2, 3]
Output: 20
Explanation: All subarray sums are: [1] = 1, [2] = 2, [3] = 3, [1,2] = 3, [2,3] = 5, [1,2,3] = 6. Thus total sum is 1+2+3+3+5+6 = 20.
Input: arr[] = [1, 3]
Output: 8
Explanation: All subarray sums are: [1] = 1 [3] = 3 [1,3] = 4. Thus total sum is 1+3+4 = 8.
Expected Time Complexity: O(n)*/