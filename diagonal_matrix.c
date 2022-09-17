#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int a[n][n];

    for(int r=0; r<n; ++r) {
        for(int c=0; c<n; ++c) scanf("%d", &a[r][c]);
    }

    int b = 0, e = n-1;

    for(int r=0; r<n; ++r, ++b, --e) {
        if(b!=e){
            int temp = a[r][b];
            a[r][b] = a[r][e];
            a[r][e] = temp;
        }
    }

    for(int r=0; r<n; ++r) {
        for(int c=0; c<n; ++c) printf("%d ", a[r][c]);
        printf("\n");
    }

    return 0;

}