class Solution {
public:
    string addBinary(string& s1, string& s2) {
        int i = s1.length() - 1;
        int j = s2.length() - 1;
        int carry = 0;
        string result = "";

        // Step 1: Add from right to left
        while (i >= 0 || j >= 0 || carry > 0) {
            int bit1 = (i >= 0) ? s1[i] - '0' : 0;
            int bit2 = (j >= 0) ? s2[j] - '0' : 0;
            int sum = bit1 + bit2 + carry;

            char currentBit = (sum % 2) + '0'; // convert int to char
            result = result + currentBit;      // append at the end (will reverse later manually)

            carry = sum / 2;

            i--;
            j--;
        }

        // Step 2: Reverse the result manually
        string finalResult = "";
        for (int k = result.length() - 1; k >= 0; k--) {
            finalResult = finalResult + result[k];
        }

        // Step 3: Remove leading zeros manually
        int start = 0;
        while (finalResult[start] == '0' && start < finalResult.length() - 1) {
            start++;
        }

        string cleanedResult = "";
        for (int k = start; k < finalResult.length(); k++) {
            cleanedResult = cleanedResult + finalResult[k];
        }

        return cleanedResult;
    }
};