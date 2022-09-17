#include <stdio.h>

int main() {

    int n, x;
    scanf("%d %d", &n, &x);
    
    int a[n];

    for(int i=0; i<n; ++i) scanf("%d", &a[i]);

    for(int i=x; i<n; ++i) printf("%d ", a[i]);

    for(int i=0; i<x; ++i) printf("%d ", a[i]);
    printf("\n");

    return 0;

}