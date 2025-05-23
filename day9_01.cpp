#include <iostream>
using namespace std;

void rowColumnSum(int matrix[3][3]) {
    int rows = 3, cols = 3;
    
    // Row Sum
    cout << "Row Sums:";
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i << ": " << rowSum << endl;
    }
   // Column Sum
    cout << "\nColumn Sums:";
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j << ": " << colSum << endl;
    }


int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    rowColumnSum(matrix);
    return 0;
}