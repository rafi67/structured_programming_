#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int m1[n][n], m2[n][n];

    for(int r=0; r<n; ++r) {
        for(int c=0; c<n; ++c) {
            scanf("%d", &m1[r][c]);
        }
    }

    for(int r=0; r<n; ++r) {
        for(int c=0; c<n; ++c) {
            scanf("%d", &m2[r][c]);
        }
    }

    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            printf("%d ", m1[i][j]*m2[i][j]);
        }
        printf("\n");
    }

    return 0;

}