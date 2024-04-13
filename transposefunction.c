#include <stdio.h>

// Function to transpose a matrix
void transposeMatrix(int original[3][3], int rows, int cols, int result[3][3]) {
    for (int i = 0; i < rows;i++) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = original[i][j];
        }
    }
}

int main() 
{
    int originalMatrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transposedMatrix[3][3];

    // Call the transpose function
    transposeMatrix(originalMatrix, 3, 3, transposedMatrix);

    // Display the transposed matrix
    printf("Original Matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", originalMatrix[i][j]);
        }
        printf("\n");
    }
   printf("\nTransposed Matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", transposedMatrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
  