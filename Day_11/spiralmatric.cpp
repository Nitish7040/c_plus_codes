#include <iostream>
#include <vector>

using namespace std;

void printSpiralMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    
    // Create a new matrix to store the spiral order in matrix form
    vector<vector<int>> spiralMatrix(n, vector<int>(m, 0));

    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;
    int value = 1; // Start filling with 1

    while (top <= bottom && left <= right) {
        // Fill the top row
        for (int i = left; i <= right; ++i)
            spiralMatrix[top][i] = value++;
        top++;

        // Fill the right column
        for (int i = top; i <= bottom; ++i)
            spiralMatrix[i][right] = value++;
        right--;

        // Fill the bottom row (if any rows remain)
        if (top <= bottom) {
            for (int i = right; i >= left; --i)
                spiralMatrix[bottom][i] = value++;
            bottom--;
        }

        // Fill the left column (if any columns remain)
        if (left <= right) {
            for (int i = bottom; i >= top; --i)
                spiralMatrix[i][left] = value++;
            left++;
        }
    }

    // Print the spiral matrix
    for (const auto& row : spiralMatrix) {
        for (int element : row) {
            cout << element << "\t";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    printSpiralMatrix(matrix);

    return 0;
}
