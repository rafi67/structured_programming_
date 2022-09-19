#include <stdio.h>

int main() {

    int n, *p;
    scanf("%d", &n);

    int a[n];

    for(int i=0; i<n; i++) scanf("%d", &a[i]);

    p = a;
    ++p;

    for(int i=1; i<n; i++) {
        *p = *p + *(p-1);
        p++;
    }

    printf("sum is %d\n", a[n-1]);

    return 0;

}