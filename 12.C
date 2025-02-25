#include <stdio.h>

int main() {
    int rows, cols, i, j,sum=0;
    int matrix[100][100];
    int count[1000] = {0}; // Frequency array initialized to 0

    // Input dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Count the frequency of even numbers
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == 0) { // Check if the number is even
                count[matrix[i][j]]++;
                  // Increment the frequency
            }
        }
    }
    // Display the frequency of even numbers
    printf("\nFrequency of even numbers in the matrix:\n");
    for (i = 0; i<rows; i++) {
        for (j = 0; j < cols; j++) {
            
            if (count[matrix[i][j]] > 0) {
            printf("Number %d: %d times\n", matrix[i][j], count[matrix[i][j]]);
            
            }
        count[matrix[i][j]]=0;
        }
    }  
    return 0;
}
