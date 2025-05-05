#include <iostream>
using namespace std;

class Solution {
  public:
    bool isPrime(int n) {
        
        if (n <= 1) return false;      // 0 and 1 are NOT prime
        if (n == 2) return true;       // 2 is the ONLY even prime number
        if (n % 2 == 0) return false;  // All other even numbers are NOT prime

        // 2. Check only odd numbers up to sqrt(n)
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                return false;  
            }
        }
        return true;  // No divisors found, it's PRIME!
    }
};

int main() {
    Solution sol;
    int num;

    cout << "Enter a number to check if it's prime: ";
    cin >> num;

    if (sol.isPrime(num)) {
        cout << num << " is a Prime Number." << endl;
    } else {
        cout << num << " is NOT a Prime Number." << endl;
    }

    return 0;
}
