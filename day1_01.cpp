#include <iostream>
using namespace std;

class Solution {
public:
    int countFactors(int N) {
        int count = 0;

        for (int i = 1; i * i <= N; ++i)
        {
            if (N%i== 0) {
                if (i==N/i)                // Perfect square case (e.g., 36 -> 6*6)
                    count += 1;
                else
                    count += 2;             // Count both i and (N/i)
            }
        }

        return count;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter a number to count its factors: ";
    cin >> n;

    cout << "Number of factors: " << sol.countFactors(n) << endl;

    return 0;
}
