#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);  // Input number of rows (m) and columns (n)

    int matrix[m][n];
    
    // Input the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Iterate through each row to find the longest sequence of 1s
    for (int i = 0; i < m; i++) {
        int max_len = 0, current_len = 0;
        int start = -1, end = -1, temp_start = -1;

        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 1) {
                if (current_len == 0) {
                    temp_start = j;  // Start of a new sequence
                }
                current_len++;

                if (current_len > max_len) {
                    max_len = current_len;
                    start = temp_start;
                    end = j;
                }
            } else {
                current_len = 0;  // Reset for the next possible sequence
            }
        }

        // Output the result for the current row
        if (max_len == 0) {
            printf("-1 -1\n");  // No 1s in this row
        } else {
            printf("%d %d\n", start, end);  // Output the start and end of the longest sequence
        }
    }

    return 0;
}
