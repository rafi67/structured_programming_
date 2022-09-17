#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int matrix1[n][n], matrix2[n][n], matrix3[n][n];

    for(int r=0; r<n; ++r) {
        for(int c=0; c<n; ++c) scanf("%d", &matrix1[r][c]);
    }

    for(int r=0; r<n; ++r) {
        for(int c=0; c<n; ++c) scanf("%d", &matrix2[r][c]);
    }

    for(int r=0; r<n; ++r) {
        for(int c=0; c<n; ++c) {
            matrix3[r][c] = matrix1[r][c]+matrix2[r][c];
        }
    }

    for(int r=0; r<n; ++r) {
        for(int c=0; c<n; ++c) printf("%d ", matrix3[r][c]);
        printf("\n");
    }

    return 0;

}