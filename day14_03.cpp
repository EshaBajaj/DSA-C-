class Solution {
  public:
    int onlyFirstAndLastAreSet(long long int n) {
        if (n == 0)
            return 0;

        int totalBits = 0;
        long long int temp = n;

        while (temp > 0) {
            totalBits++;
            temp = temp >> 1;
        }

        long long int expected = (1LL << (totalBits - 1)) | 1;

        if (n == expected)
            return 1;
        else
            return 0;
    }
};
