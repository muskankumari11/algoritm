#include <iostream>

int diagonalDifference(int matrix[][100], int size) {
    int primaryDiagonal = 0;
    int secondaryDiagonal = 0;

    for (int i = 0; i < size; i++) {
        primaryDiagonal += matrix[i][i];
        secondaryDiagonal += matrix[i][size - i - 1];
    }

    return abs(primaryDiagonal - secondaryDiagonal);
}

int main() {
    int n;
    std::cin >> n;

    int matrix[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }

    int result = diagonalDifference(matrix, n);
    std::cout << result << std::endl;

    return 0;
}
