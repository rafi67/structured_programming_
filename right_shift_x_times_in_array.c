#include <stdio.h>

int main() {

    int n, x, n2;
    scanf("%d %d", &n, &x);
    
    int a[n];
    
    n2 = n-x;

    for(int i=0; i<n; ++i) scanf("%d", &a[i]);

    for(int i=n2; i<n; ++i) printf("%d ", a[i]);

    for(int i=0; i<n2; ++i) printf("%d ", a[i]);
    printf("\n");

    return 0;

}