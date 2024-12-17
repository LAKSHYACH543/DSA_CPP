#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rowSum[3] = {0};  
    int colSum[3] = {0};  
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rowSum[i] =rowSum[i] +matrix[i][j];  // Add element to the corresponding row sum
            colSum[j] =colSum[j]+ matrix[i][j];  
        }
    }

    // Output the row sums
    cout << "Row sums:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Row " << i + 1 << " sum: " << rowSum[i] << endl;
    }

    // Output the column sums
    cout << "Column sums:" << endl;
    for (int j = 0; j < 3; j++) {
        cout << "Column " << j + 1 << " sum: " << colSum[j] << endl;
    }

    return 0;
}
